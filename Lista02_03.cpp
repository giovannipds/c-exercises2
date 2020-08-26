#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float precoKg,quantidadeKg,valorTotal;
    
    printf("Informe o Preço/Kg do Produto: R$ ");
    scanf("%f", &precoKg);
    printf("Informe a Quantidade (Kg) do Produto: ");
    scanf("%f", &quantidadeKg);
    
	valorTotal = precoKg*quantidadeKg;
	
	printf("O valor total a ser pago é: R$ %6.2f\n", valorTotal);

    return 0;
}
