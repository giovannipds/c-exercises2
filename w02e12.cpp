#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int b, h;
	float a;
	
	printf("Digite o valor da base do tri�ngulo: ");
	scanf("%d", &b);
	
	printf("Digite a altura do tri�ngulo: ");
	scanf("%d", &h);
		
	a = b * h / 2;
	printf("A �rea desse tri�ngulo � de %.2f un�.", a);
	
	return 1;
}
