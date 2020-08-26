#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float valorProduto,valorComDesconto;
    
    printf("Informe o valor do produto: R$ ");
    scanf("%f", &valorProduto);
    
	valorComDesconto = valorProduto*0.91;
	
	printf("O valor do produto, com 9%% de desconto, é: R$ %6.2f\n", valorComDesconto);

    return 0;
}
