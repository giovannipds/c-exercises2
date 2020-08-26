#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float altDegrau,altEscada;
    int qtdDegraus;
    
    printf("Informe a altura do degrau (cm): ");
    scanf("%f", &altDegrau);
    printf("Informe a altura da escada (cm): ");
    scanf("%f", &altEscada);
    
	qtdDegraus = ceil(altEscada/altDegrau);
	
	printf("A quantidade de degraus para atingir a altura desejada é %d\n", qtdDegraus);

    return 0;
}
