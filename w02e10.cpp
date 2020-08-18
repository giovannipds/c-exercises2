#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double salary, nSalary;
	const int pRaise = 37;
	
	printf("Qual é o seu salário? ");
	scanf("%lf", &salary);
		
	nSalary = salary * (1 + (double)pRaise / 100);
	printf("Seu salário com aumento de %d%% é de R$ %.2lf.\n", pRaise, nSalary);
	
	return 1;
}
