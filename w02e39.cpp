#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int acNumber, d1, d2, d3, d4, vDigit;
	
	do {
		printf("Digite o número da conta (4 dígitos): ");
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
	// printf("O dígito 1 é %d;\n", d1);
	// printf("O dígito 2 é %d;\n", d2);
	// printf("O dígito 3 é %d;\n", d3);
	// printf("O dígito 4 é %d;\n", d4);
	
	vDigit = ((d1 * d2 * d3 * d4) - (d1 + d2 + d3 + d4)) % 9;
	printf("Sua conta bancária é a %d-%d.", acNumber, vDigit);
	
	return 1;
}
