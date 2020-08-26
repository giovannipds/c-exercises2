#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float custoCarro,custoFinal;
    
    printf("Informe o custo do automóvel: R$ ");
    scanf("%f", &custoCarro);

	custoFinal = custoCarro*1.28*1.45;
	
	printf("O custo final do automóvel ao consumidor é R$ %7.2f\n", custoFinal);

    return 0;
}
