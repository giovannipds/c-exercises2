#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int anoNascimento,anoAtual;
    int idadeAnos,idadeMeses,idadeDias,idadeFutura;
        
    printf("Informe o ano de nascimento da pessoa: ");
    scanf("%d", &anoNascimento);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);
    
	idadeAnos = anoAtual-anoNascimento;
	idadeMeses = idadeAnos*12;
	idadeDias = idadeAnos*365;
	idadeFutura = 2035-anoNascimento;
	
	printf("A pessoa tem %d anos\n", idadeAnos);
	printf("A pessoa tem %d meses\n", idadeMeses);
	printf("A pessoa tem %d dias\n", idadeDias);
	printf("A pessoa terá %d anos em 2035\n", idadeFutura);

    return 0;
}
