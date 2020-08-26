#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdEleitores,qtdVotosBrancos,qtdVotosNulos,qtdVotosValidos;
    float percVotosBrancos,percVotosNulos,percVotosValidos;
    
    printf("Informe a quantidade de eleitores do município: ");
    scanf("%d", &qtdEleitores);
    printf("Informe a quantidade de votos brancos: ");
    scanf("%d", &qtdVotosBrancos);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d", &qtdVotosNulos);
    printf("Informe a quantidade de votos válidos: ");
    scanf("%d", &qtdVotosValidos);
	    
	percVotosBrancos = (float)qtdVotosBrancos/qtdEleitores*100;
	percVotosNulos = (float)qtdVotosNulos/qtdEleitores*100;
	percVotosValidos = (float)qtdVotosValidos/qtdEleitores*100;
	
	printf("%% de votos brancos: %3.2f\n", percVotosBrancos);
	printf("%% de votos nulos: %3.2f\n", percVotosNulos);
	printf("%% de votos válidos: %3.2f\n", percVotosValidos);

    return 0;
}
