#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	int a, b, result;
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	result = pow(abs(a - b), 2);
	printf("O quadrado da diferença de %d e %d é %d.", a, b, result);
	return 1;
}
