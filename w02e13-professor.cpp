#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,C,resultado;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &A);
	printf("Informe o segundo n�mero: ");
    scanf("%d", &B);
    printf("Informe o terceiro n�mero: ");
    scanf("%d", &C);
    
	resultado = pow(A+B+C,2);
	
	printf("O quadrado da soma dos tr�s n�meros � %d\n", resultado);

    return 0;
}
