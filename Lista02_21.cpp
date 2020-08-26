#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float altura,peso,imc;
    
    printf("Informe a altura (m): ");
    scanf("%f", &altura);
    printf("Informe o peso (Kg): ");
    scanf("%f", &peso);
    
	imc = peso/pow(altura,2);
	
	printf("O IMC é %2.1f\n", imc);

    return 0;
}
