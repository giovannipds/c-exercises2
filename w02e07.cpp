#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	double total, installment;
	printf("Bem-vindo a Loja Mam�o com A�ucar.\n");
	printf("Estamos vendendo em 5x sem juros.\n");
	printf("Qual valor total da sua compra? ");
	scanf("%lf", &total);
	installment = total / 5;
	printf("O valor de suas presta��es ser� de R$ %.2lf.\n", installment);
	printf("Obrigado, volte sempre!");
	return 1;
}
