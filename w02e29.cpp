#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int e, b, n, v;
	float pb, pn, pv;
	
	printf("Quantos eleitores temos no município? ");
	scanf("%d", &e);
	
	printf("Qual o número de votos em branco? ");
	scanf("%d", &b);
	
	printf("Quantos nulos? ");
	scanf("%d", &n);
	
	printf("Quantos válidos? ");
	scanf("%d", &v);
	
	pb = (float)b / (float)e * 100;
	printf("Resumidamente, %.2f%% votaram em branco.\n", pb);
	
	pn = (float)n / (float)e * 100;
	printf("%.2f%% foram nulos.\n", pn);
	
	pv = (float)v / (float)e * 100;
	printf("E %.2f%% foram válidos.\n", pv);

	return 1;
}
