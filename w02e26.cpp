#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int bornYear, yearNow, age, months, days, age2035;
	
	printf("Que ano você nasceu (ex. 1950)? ");
	scanf("%d", &bornYear);
	
	printf("Em que ano estamos? ");
	scanf("%d", &yearNow);
	
	age = abs(yearNow - bornYear); 
	printf("Você tem %d ano(s).\n", age);
	
	months = age * 12;
	printf("Mais de %d meses de idade.\n", months);
	
	days = age * 365;
	printf("E %d dias.\n", days);
	
	age2035 = abs(2035 - bornYear);
	printf("E em 2035 você terá %d anos.", age2035);

	return 1;
}
