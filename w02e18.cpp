#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	double vp, nVp;
	
	const int d = 9;
	
	printf("Quanto custa seu produto? ");
	scanf("%lf", &vp);
		
	nVp = vp * (1 - (double)d / 100);
	printf("O novo valor desse produto é de R$ %.2lf contando esses %d%% de desconto para tentarmos alavancar as vendas.", nVp, d);
	
	return 1;
}
