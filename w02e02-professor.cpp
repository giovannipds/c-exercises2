#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float precoProduto,valorPago,valorTroco;
    
    printf("Informe o Pre�o do Produto: R$ ");
    scanf("%f", &precoProduto);
    printf("Informe o Valor Pago: R$ ");
    scanf("%f", &valorPago);
    
	valorTroco = valorPago-precoProduto;
	
	printf("O valor do troco �: R$ %6.2f\n", valorTroco);

    return 0;
}
