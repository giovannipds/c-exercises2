#include <stdio.h>
#include <windows.h>
#include <math.h>

const int profitPercent = 23;

int main() {
	SetConsoleOutputCP(1252);
	
	float cost, price;
	int ticketsMeta, ticketsProfit;
	
	printf("Qual o custo do espetáculo teatral? ");
	scanf("%f", &cost);
	
	printf("Qual o preço do convite desse espetáculo? ");
	scanf("%f", &price);
	
	ticketsMeta = ceil(cost / price);
	printf("Precisaremos vender pelo menos %d convites para pagar os custos do espetáculo.\n", ticketsMeta);
	
	ticketsProfit = ceil((cost + cost * profitPercent / 100) / price);
	printf("Para obtermos lucro de %d%%, teremos que vender pelo menos %d ingressos.", profitPercent, ticketsProfit);
	
	return 1;
}
