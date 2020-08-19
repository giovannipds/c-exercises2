#include <stdio.h>
#include <windows.h>
#include <math.h>

const int days = 5;

int main() {
	SetConsoleOutputCP(1252);
	
	float weight, result;
	int qty1, qty2;
	
	printf("Qual o peso do saco de ração (kg)? ");
	scanf("%f", &weight);
	
	printf("Quanto come seu gato 1 (em gramas) por dia? ");
	scanf("%d", &qty1);
	
	printf("E quanto come o gato 2 (g)? ");
	scanf("%d", &qty2);
	
	result = weight * 1000 - (qty1 + qty2) * days;
	if (result > 0) {
		printf("Após %d dias, restará %.1f gramas de ração.", days, result);
	} else {
		printf("Após %d dias, faltarão %.1f gramas de ração.", days, (float)abs(result));
	}

	return 1;
}
