#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int hours;
	const int percent = 10;
	double minWage, salary, vh;
	
	printf("Quantas horas você trabalhou? ");
	scanf("%d", &hours);
	
	printf("Qual é o valor do salário mínimo? ");
	scanf("%lf", &minWage);
	
	vh = minWage * ((double)percent / 100);
	printf("Seu valor/hora é de R$ %.2lf/h.\n", vh);
	
	salary = hours * vh;
	printf("Seu salário bruto é de R$ %.2lf.", salary);

	return 1;
}
