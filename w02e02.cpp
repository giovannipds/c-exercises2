#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float p;
	printf("Qual � o valor a ser pago? ");
	scanf("%f", &p);
	printf("O valor pago � %.2f", p);
	return 1;
}
