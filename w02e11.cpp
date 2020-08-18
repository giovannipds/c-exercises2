#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double val, dolar, valR;
	
	printf("Digite um valor em US$: ");
	scanf("%lf", &val);
	
	printf("Digite a cotação do dólar hoje: ");
	scanf("%lf", &dolar);
		
	valR = val * dolar;
	printf("Este valor em Reais hoje equivale a R$ %.2lf.", valR);
	
	return 1;
}
