#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float kgPrice, consumption, price;
	printf("Quanto é o quilo desse produto (em R$)? ");
	scanf("%f", &kgPrice);
	printf("Quantos quilos foram consumidos? ");
	scanf("%f", &consumption);
	price = consumption * kgPrice;
	printf("O valor a ser pago é de R$ %.2f.", price);
	return 1;
}
