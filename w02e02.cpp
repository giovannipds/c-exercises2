#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float paid, price;
	printf("Qual � o valor a ser pago? ");
	scanf("%f", &paid);
	printf("Qual � o pre�o do produto? ");
	scanf("%f", &price);
	printf("O valor pago � %.2f, o produto custa %.2f", paid, price);
	return 1;
}
