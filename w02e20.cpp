#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int ia, im, id, totalDays, dByY = 365, dByM = 30;
	
	printf("Quantos anos você tem? ");
	scanf("%d", &ia);
	
	printf("E quantos meses já foram até agora? ");
	scanf("%d", &im);
	
	printf("Mais quantos dias? ");
	scanf("%d", &id);
		
	totalDays = ia * dByY + im * dByM + id;
	printf("Você já tem um total de %d dias de vida!! Woooowwww! :B\n", totalDays);
	printf("Cê tá velho kkkkk :)");
	
	return 1;
}
