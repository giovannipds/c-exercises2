#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double pc, pv;
	int a;
	
	printf("Qual � o pre�o de custo do produto? ");
	scanf("%lf", &pc);
	
	printf("Qual ser� o percentual que ganharemos sobre ele? ");
	scanf("%d", &a);
		
	pv = pc * (1 + a / 100);
	printf("Para obter esse percentual, devemos vend�-lo a R$ %.2lf.", pv);

	return 1;
}
