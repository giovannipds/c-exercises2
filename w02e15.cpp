#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int x, y, p;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &x);
		
	printf("Digite outro: ");
	scanf("%d", &y);
			
	p = pow(x, y);
	printf("A pot�ncia de %d elevado � %d � %d.", x, y, p);
	
	return 1;
}
