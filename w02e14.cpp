#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int b, h, a;
	
	printf("Digite o valor da base do ret�ngulo: ");
	scanf("%d", &b);
	
	printf("Digite a altura: ");
	scanf("%d", &h);
			
	a = b * h;
	printf("A �rea do ret�ngulo � de %d un�.", a);
	
	return 1;
}
