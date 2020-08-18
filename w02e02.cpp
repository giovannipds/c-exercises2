#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	float p;
	printf("Qual é o valor a ser pago? ");
	scanf("%f", &p);
	printf("O valor pago é %.2f", p);
	return 1;
}
