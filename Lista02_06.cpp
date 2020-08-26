#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,resultado;
    
    printf("Informe um número (A): ");
    scanf("%d", &A);
    printf("Informe um número (B): ");
    scanf("%d", &B);

	resultado = pow(A-B,2);
	
	printf("O quadrado da diferença de %d menos %d é %d\n", A, B, resultado);

    return 0;
}
