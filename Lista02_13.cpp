#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,C,resultado;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &A);
	printf("Informe o segundo número: ");
    scanf("%d", &B);
    printf("Informe o terceiro número: ");
    scanf("%d", &C);
    
	resultado = pow(A+B+C,2);
	
	printf("O quadrado da soma dos três números é %d\n", resultado);

    return 0;
}
