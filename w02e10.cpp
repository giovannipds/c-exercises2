#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double salary, nSalary;
	const int pRaise = 37;
	
	printf("Qual � o seu sal�rio? ");
	scanf("%lf", &salary);
		
	nSalary = salary * (1 + (double)pRaise / 100);
	printf("Seu sal�rio com aumento de %d%% � de R$ %.2lf.\n", pRaise, nSalary);
	
	return 1;
}
