#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int a, b, swapper;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	
	swapper = a;
	a = b;
	b = swapper;
	
	printf("O valor de A � %d e o valor de B � %d.", a, b);
	
	return 1;
}
