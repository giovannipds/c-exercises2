#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int qtdCed10,qtdCed5,qtdCed1;
    int valorSaque,aux;
        
    printf("Informe o valor do saque: ");
    scanf("%d", &valorSaque);

    aux = valorSaque;
    qtdCed10 = (int)aux/10;
    aux = aux%10;
    qtdCed5 = (int)aux/5;
    qtdCed1 = aux%5;
	
	printf("Quantidade de cédulas de R$ 10: %d\n", qtdCed10);
	printf("Quantidade de cédulas de R$  5: %d\n", qtdCed5);
	printf("Quantidade de cédulas de R$  1: %d\n", qtdCed1);
	
    return 0;
}
