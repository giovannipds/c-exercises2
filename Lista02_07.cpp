#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float valorCompra,prestacao;
    
    printf("Informe o valor da compra: R$ ");
    scanf("%f", &valorCompra);
    
	prestacao = valorCompra/5;
	
	printf("A compra no valor de R$ %6.2f poderá ser paga em 5 parcelas de R$ %5.2f\n", valorCompra, prestacao);

    return 0;
}
