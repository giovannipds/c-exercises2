#include <stdio.h>
#include <windows.h>

const int distributorsPercent = 28, taxesPercent = 45;

int main() {
	SetConsoleOutputCP(1252);
	
	float price, cost;
	
	printf("Qual o custo de fábrica do carro? ");
	scanf("%f", &cost);
	
	price = cost + cost * (distributorsPercent + taxesPercent) / 100;
	printf("O custo final do carro para o consumidor é de R$%.2f.", price);
	
	return 1;
}
