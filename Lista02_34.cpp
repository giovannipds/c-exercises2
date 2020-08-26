#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdCarrosVendidos;
    float valorTotalVendas,salarioFixo,valorPorCarroVendido,salarioFinal;
        
    printf("Informe a quantidade de carros vendidos: ");
    scanf("%d", &qtdCarrosVendidos);
    printf("Informe o valor total das vendas: R$ ");
    scanf("%f", &valorTotalVendas);
    printf("Informe o salário fixo: R$ ");
    scanf("%f", &salarioFixo);
    printf("Informe o valor recebido por carro vendido: R$ ");
    scanf("%f", &valorPorCarroVendido);
	
    salarioFinal = salarioFixo+(qtdCarrosVendidos*valorPorCarroVendido)+valorTotalVendas*0.05;
	
	printf("O salário final a receber é de R$ %7.2f\n", salarioFinal);

    return 0;
}
