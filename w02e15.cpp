#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int x, y, p;
	
	printf("Digite um número inteiro: ");
	scanf("%d", &x);
		
	printf("Digite outro: ");
	scanf("%d", &y);
			
	p = pow(x, y);
	printf("A potência de %d elevado à %d é %d.", x, y, p);
	
	return 1;
}
