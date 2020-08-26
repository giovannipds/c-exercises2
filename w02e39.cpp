#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int acNumber, d1, d2, d3, d4, vDigit;
	
	do {
		printf("Digite o n�mero da conta (4 d�gitos): ");
		fflush(stdin); // clear memory buffer
		scanf("%d", &acNumber);
		if (acNumber < 1000 || acNumber > 9999) {
			printf("Conta desconhecida, tente novamente.\n");
		}
	} while (acNumber < 1000 || acNumber > 9999);
	
	d1 = acNumber / 1000;
	// d2 = acNumber / 100 - d1 * 10;
	d2 = acNumber % 1000 / 100;
	// d3 = acNumber / 10 - d1 * 100 - d2 * 10;
	d3 = acNumber % 100 / 10;
	// d4 = acNumber - d1 * 1000 - d2 * 100 - d3 * 10;
	d4 = acNumber % 10;
	// printf("O d�gito 1 � %d;\n", d1);
	// printf("O d�gito 2 � %d;\n", d2);
	// printf("O d�gito 3 � %d;\n", d3);
	// printf("O d�gito 4 � %d;\n", d4);
	
	vDigit = ((d1 * d2 * d3 * d4) - (d1 + d2 + d3 + d4)) % 9;
	printf("Sua conta banc�ria � a %d-%d.", acNumber, vDigit);
	
	return 1;
}
