#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float valorEmDolares,cotacaoDolar,valorEmReais;
    
    printf("Informe o valor em dólares: US$ ");
    scanf("%f", &valorEmDolares);
	printf("Informe o valor de US$ 1 em R$ ");
    scanf("%f", &cotacaoDolar);
    
	valorEmReais = valorEmDolares*cotacaoDolar;
	
	printf("US$ %7.2f equivale a R$ %7.2f\n", valorEmDolares, valorEmReais);

    return 0;
}
