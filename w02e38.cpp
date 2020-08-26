#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int value, notes10, notes5, notes1;
	
	printf("Bem-vindo ao terminal de autoatendimento.\n");
	
	printf("Qual o valor a ser retirado em saque (somente valores inteiros)? ");
	scanf("%d", &value);
	
	notes10 = floor((float)value / 10);
	notes5 = floor(((float)value - notes10 * 10) / 5);
	notes1 = value - notes10 * 10 - notes5 * 5;
	printf("Ok, serão entregues %d nota(s) de R$10;\n", notes10);
	printf("%d nota(s) de R$5;\n", notes5);
	printf("E %d nota(s) de R$1.\n", notes1);
	
	printf("Obrigado! E volte sempre que precisar.", notes1);
	
	return 1;
}
