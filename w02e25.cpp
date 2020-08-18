#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double pc, pv;
	int a;
	
	printf("Qual é o preço de custo do produto? ");
	scanf("%lf", &pc);
	
	printf("Qual será o percentual que ganharemos sobre ele? ");
	scanf("%d", &a);
		
	pv = pc * (1 + a / 100);
	printf("Para obter esse percentual, devemos vendê-lo a R$ %.2lf.", pv);

	return 1;
}
