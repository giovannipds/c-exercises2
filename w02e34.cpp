#include <stdio.h>
#include <windows.h>

const int percentBySales = 5;

int main() {
	SetConsoleOutputCP(1252);
	
	int carsSold;
	float totalOfSales, fixedWage, comissionByCar, salary;
	
	printf("Quantos carros o funcion�rio vendeu? ");
	scanf("%d", &carsSold);
	
	printf("Qual o valor total de suas vendas? ");
	scanf("%f", &totalOfSales);
	
	printf("Qual o sal�rio fixo por m�s? ");
	scanf("%f", &fixedWage);
	
	printf("Qual o valor adicional por carro vendido? ");
	scanf("%f", &comissionByCar);
	
	salary = fixedWage + (comissionByCar * carsSold) + (totalOfSales * percentBySales / 100);
	printf("O sal�rio final do vendedor � de R$%.2f.", salary);
	
	return 1;
}
