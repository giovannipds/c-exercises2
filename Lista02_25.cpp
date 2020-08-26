#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float custoProduto,percAcrescimo,valorVenda;
        
    printf("Informe o valor de custo do produto: R$ ");
    scanf("%f", &custoProduto);
    printf("Informe o percentual de acréscimo (%%): ");
    scanf("%f", &percAcrescimo);
    
	valorVenda = custoProduto * (1+percAcrescimo/100);
	
	printf("O valor de venda do produto é R$ %6.2f\n", valorVenda);

    return 0;
}
