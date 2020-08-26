#include <stdio.h>
#include <windows.h>
#include <math.h>

const int profitPercent = 23;

int main() {
	SetConsoleOutputCP(1252);
	
	float cost, price;
	int ticketsMeta, ticketsProfit;
	
	printf("Qual o custo do espet�culo teatral? ");
	scanf("%f", &cost);
	
	printf("Qual o pre�o do convite desse espet�culo? ");
	scanf("%f", &price);
	
	ticketsMeta = ceil(cost / price);
	printf("Precisaremos vender pelo menos %d convites para pagar os custos do espet�culo.\n", ticketsMeta);
	
	ticketsProfit = ceil((cost + cost * profitPercent / 100) / price);
	printf("Para obtermos lucro de %d%%, teremos que vender pelo menos %d ingressos.", profitPercent, ticketsProfit);
	
	return 1;
}
