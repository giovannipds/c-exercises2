#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float numHorasTrab,salarioMin,valorHoraTrab,salario;
        
    printf("Informe o n�mero de horas trabalhadas: ");
    scanf("%f", &numHorasTrab);
    printf("Informe o valor do sal�rio m�nimo atual: R$ ");
    scanf("%f", &salarioMin);
    
	valorHoraTrab = salarioMin*0.10;
	salario = numHorasTrab*valorHoraTrab;
	
	printf("O sal�rio a receber � de R$ %7.2f\n", salario);

    return 0;
}
