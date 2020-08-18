#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	int n1, n2, squareSum;
	printf("Digite o número 1: ");
	scanf("%d", &n1);
	printf("Digite o número 2: ");
	scanf("%d", &n2);
	squareSum = pow(n1, 2) + pow(n2, 2);
	printf("A soma dos quadrados é %d.", squareSum);
	return 1;
}
