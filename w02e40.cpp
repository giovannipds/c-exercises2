#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int num, d1, d2, d3;
	
	do {
		printf("Digite um n�mero inteiro com tr�s d�gitos: ");
		fflush(stdin); // clear memory buffer
		scanf("%d", &num);
		if (num < 100 || num > 999) {
			printf("Intervalo de n�mero errado, por favor tente novamente.\n");
		}
	} while (num < 100 || num > 999);
	
	d1 = num / 100;
	d2 = num % 100 / 10;
	d3 = num % 10;
	
	// printf("O d�gito 1 � %d;\n", d1);
	// printf("O d�gito 2 � %d;\n", d2);
	// printf("O d�gito 3 � %d;\n", d3);
	
	printf("Este n�mero invertido � %d%d%d.", d3, d2, d1);
	
	return 1;
}
