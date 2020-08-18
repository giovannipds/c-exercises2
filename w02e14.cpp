#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int b, h, a;
	
	printf("Digite o valor da base do retângulo: ");
	scanf("%d", &b);
	
	printf("Digite a altura: ");
	scanf("%d", &h);
			
	a = b * h;
	printf("A área do retângulo é de %d un².", a);
	
	return 1;
}
