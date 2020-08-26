#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdConvitesCusto,qtdConvitesLucro;
    float custoEspetaculo,precoConvite;
        
    printf("Informe o custo do espetáculo: R$ ");
    scanf("%f", &custoEspetaculo);
    printf("Informe o preço do convite: R$ ");
    scanf("%f", &precoConvite);
	
    qtdConvitesCusto = ceil(custoEspetaculo/precoConvite);
    qtdConvitesLucro = ceil(custoEspetaculo*1.23/precoConvite);
	
	printf("Quantidade mínima de convites para cobrir o custo: %d\n", qtdConvitesCusto);
	printf("Quantidade mínima de convites para obter o lucro de 23%%: %d\n", qtdConvitesLucro);

    return 0;
}
