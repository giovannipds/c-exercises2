#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float salario,salarioNovo;
    
    printf("Informe o valor do sal�rio atual: R$ ");
    scanf("%f", &salario);

	salarioNovo = salario*1.37;
	
	printf("O valor do novo sal�rio � R$ %8.2f\n", salarioNovo);

    return 0;
}
