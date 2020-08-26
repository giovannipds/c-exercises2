#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int voters, votesA, votesB;
	float percentA, percentB, percentNull;
	
	printf("Qual o número total de eleitores? ");
	scanf("%d", &voters);
	
	printf("Qual o número de votos para o primeiro candidato? ");
	scanf("%d", &votesA);
	
	printf("Qual o número de votos para o segundo candidato? ");
	scanf("%d", &votesB);
	
	percentA = (float)votesA * 100 / voters;
	percentB = (float)votesB * 100 / voters;
	printf("O candidato 1 fez %.1f%% dos votos.\n", percentA);
	printf("O candidato 2 fez %.1f%%.\n", percentB);
	
	percentNull = 100 - (percentA + percentB);
	printf("O percentual de votos nulos foi de %.1f%%.", percentNull);
	
	return 1;
}
