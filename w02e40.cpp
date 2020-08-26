#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int num, d1, d2, d3;
	
	do {
		printf("Digite um número inteiro com três dígitos: ");
		fflush(stdin); // clear memory buffer
		scanf("%d", &num);
		if (num < 100 || num > 999) {
			printf("Intervalo de número errado, por favor tente novamente.\n");
		}
	} while (num < 100 || num > 999);
	
	d1 = num / 100;
	d2 = num % 100 / 10;
	d3 = num % 10;
	
	// printf("O dígito 1 é %d;\n", d1);
	// printf("O dígito 2 é %d;\n", d2);
	// printf("O dígito 3 é %d;\n", d3);
	
	printf("Este número invertido é %d%d%d.", d3, d2, d1);
	
	return 1;
}
