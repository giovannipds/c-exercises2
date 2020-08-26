#include <stdio.h>
#include <windows.h>

const int dailyDiscount = 25;

int main() {
	SetConsoleOutputCP(1252);
	
	int apartments;
	float daily, dailyPromo, estimatedForWeekend, promoGap;
	
	printf("Quantos apartamentos h� no hotel? ");
	scanf("%d", &apartments);
	
	printf("Qual � o valor da di�ria dos apartamentos? ");
	scanf("%f", &daily);
	
	dailyPromo = daily * (100 - dailyDiscount) / 100;
	printf("O valor promocional da di�ria � de R$%.2f.\n", dailyPromo);
	
	estimatedForWeekend = apartments * dailyPromo * 2;
	printf("Caso tenhamos 100%% de ocupa��o, faturaremos R$%.2f.\n", estimatedForWeekend);
	
	printf("Caso seja 70%%, faturaremos R$%.2f.\n", estimatedForWeekend * .7);
	
	promoGap = apartments * daily * 2 - estimatedForWeekend;
	printf("Em virtude da promo��o, deixaremos de arrecadar R$%.2f caso atinjamos 100%%.", promoGap);
	
	return 1;
}
