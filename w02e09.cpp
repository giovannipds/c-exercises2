#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float n1, n2, sum, subtraction, division, product;
	
	printf("Digite o n�mero 1: ");
	scanf("%f", &n1);
	
	printf("Digite o n�mero 2: ");
	scanf("%f", &n2);
	
	sum = n1 + n2;
	printf("A soma deles � %.2f.\n", sum);
	
	subtraction = n1 - n2;
	printf("A subtra��o deles � %.2f.\n", subtraction);
	
	division = n1 / n2;
	printf("A divis�o deles � %.2f.\n", division);
	
	product = n1 * n2;
	printf("A multiplica��o deles � %.2f.\n", product);
	
	return 1;
}
