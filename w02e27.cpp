#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int hours;
	const int percent = 10;
	double minWage, salary, vh;
	
	printf("Quantas horas voc� trabalhou? ");
	scanf("%d", &hours);
	
	printf("Qual � o valor do sal�rio m�nimo? ");
	scanf("%lf", &minWage);
	
	vh = minWage * ((double)percent / 100);
	printf("Seu valor/hora � de R$ %.2lf/h.\n", vh);
	
	salary = hours * vh;
	printf("Seu sal�rio bruto � de R$ %.2lf.", salary);

	return 1;
}
