#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int a, b, c, squareSum;
	
	printf("Digite um valor numérico inteiro: ");
	scanf("%d", &a);
	
	printf("Digite outro valor numérico inteiro: ");
	scanf("%d", &b);
	
	printf("Digite mais um valor numérico inteiro: ");
	scanf("%d", &c);
		
	squareSum = pow(a + b + c, 2);
	printf("O quadrado da soma de %d, %d e %d é %d.", a, b, c, squareSum);
	
	return 1;
}
