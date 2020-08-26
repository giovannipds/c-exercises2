#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdEleitores,qtdVotosCand1,qtdVotosCand2,qtdVotosNulos;
    float percVotosCand1,percVotosCand2,percVotosNulos;
        
    printf("Informe a quantidade de eleitores do município: ");
    scanf("%d", &qtdEleitores);
    printf("Informe a quantidade de votos do candidato 1: ");
    scanf("%d", &qtdVotosCand1);
    printf("Informe a quantidade de votos do candidato 2: ");
    scanf("%d", &qtdVotosCand2);
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d", &qtdVotosNulos);
	
    percVotosCand1 = (float)qtdVotosCand1/qtdEleitores*100;
    percVotosCand2 = (float)qtdVotosCand2/qtdEleitores*100;
	percVotosNulos = (float)qtdVotosNulos/qtdEleitores*100;
	
	printf("%% de votos candidato 1: %3.2f\n", percVotosCand1);
	printf("%% de votos candidato 2: %3.2f\n", percVotosCand2);
	printf("%% de votos nulos: %3.2f\n", percVotosNulos);
	
    return 0;
}
