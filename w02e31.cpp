#include <stdio.h>
#include <windows.h>
#include <math.h>

const int days = 5;

int main() {
	SetConsoleOutputCP(1252);
	
	float weight, result;
	int qty1, qty2;
	
	printf("Qual o peso do saco de ra��o (kg)? ");
	scanf("%f", &weight);
	
	printf("Quanto come seu gato 1 (em gramas) por dia? ");
	scanf("%d", &qty1);
	
	printf("E quanto come o gato 2 (g)? ");
	scanf("%d", &qty2);
	
	result = weight * 1000 - (qty1 + qty2) * days;
	if (result > 0) {
		printf("Ap�s %d dias, restar� %.1f gramas de ra��o.", days, result);
	} else {
		printf("Ap�s %d dias, faltar�o %.1f gramas de ra��o.", days, (float)abs(result));
	}

	return 1;
}
