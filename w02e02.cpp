#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float paid, price, exchange;
	printf("Qual é o valor a pago? ");
	scanf("%f", &paid);
	printf("Qual é o preço do produto? ");
	scanf("%f", &price);
	exchange = abs(price - paid);
	printf("O valor pago foi de R$ %.2f.\n", paid);
	printf("O produto custa R$ %.2f.\n", price);
	if (price > paid) {
		printf("Damos R$ %.2f de desconto pro cliente ou cobramos essa diferença.", exchange);
	} else if (price < paid) {
		printf("O troco deve ser de R$ %.2f\n", exchange);
	} else {
		printf("Não é necessário troco.");
	}
	return 1;
}
