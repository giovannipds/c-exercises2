#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int ia, im, id, totalDays, dByY = 365, dByM = 30;
	
	printf("Quantos anos voc� tem? ");
	scanf("%d", &ia);
	
	printf("E quantos meses j� foram at� agora? ");
	scanf("%d", &im);
	
	printf("Mais quantos dias? ");
	scanf("%d", &id);
		
	totalDays = ia * dByY + im * dByM + id;
	printf("Voc� j� tem um total de %d dias de vida!! Woooowwww! :B\n", totalDays);
	printf("C� t� velho kkkkk :)");
	
	return 1;
}
