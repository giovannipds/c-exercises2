#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float cat1, cat2, h;
	
	printf("Informe o primeiro cateto de um tri�ngulo ret�ngulo: ");
	scanf("%f", &cat1);
	
	printf("Informe o segundo: ");
	scanf("%f", &cat2);
		
	h = sqrt(pow(cat1, 2) + pow(cat2, 2));
	printf("A hipotenusa do tri�ngulo � %.2f.", h);
	
	return 1;
}
