#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double salary, newSalary;
	int readjustment;
	
	printf("Qual seu sal�rio/m�s? ");
	scanf("%lf", &salary);
	
	printf("Qual o percentual de reajuste? ");
	scanf("%d", &readjustment);
	
	newSalary = salary * (1 + (double)readjustment / 100);
	printf("Seu novo sal�rio � de R$ %.2lf.\n", newSalary);

	return 1;
}
