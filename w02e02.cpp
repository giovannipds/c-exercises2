#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float paid, price;
	printf("Qual é o valor a ser pago? ");
	scanf("%f", &paid);
	printf("Qual é o preço do produto? ");
	scanf("%f", &price);
	printf("O valor pago é %.2f, o produto custa %.2f", paid, price);
	return 1;
}
