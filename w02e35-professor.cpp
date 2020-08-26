#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdApartamentos;
    float valorFinalSemana,valorFinalSemanaDesconto,valorArrecadado100,valorArrecadado70,valorDesconto;
        
    printf("Informe a quantidade de apartamentos do hotel: ");
    scanf("%d", &qtdApartamentos);
    printf("Informe o valor por apartamento final de semana: R$ ");
    scanf("%f", &valorFinalSemana);
	
    valorFinalSemanaDesconto = valorFinalSemana*0.75;
    valorArrecadado100 = valorFinalSemanaDesconto*qtdApartamentos;
    valorArrecadado70 = valorFinalSemanaDesconto*qtdApartamentos*0.70;
    valorDesconto = valorFinalSemana*qtdApartamentos-valorArrecadado100;
	
	printf("Valor promocional final de semana: R$ %7.2f\n", valorFinalSemanaDesconto);
	printf("Valor total arrecadado com 100%% de ocupação: R$ %7.2f\n", valorArrecadado100);
	printf("Valor total arrecadado com 70%% de ocupação: R$ %7.2f\n", valorArrecadado70);
	printf("Valor deixado de arrecadar com o desconto com 100%% de ocupação: R$ %7.2f\n", valorDesconto);

    return 0;
}
