#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,resultado;
    
    printf("Informe um n�mero (A): ");
    scanf("%d", &A);
    printf("Informe um n�mero (B): ");
    scanf("%d", &B);

	resultado = pow(A-B,2);
	
	printf("O quadrado da diferen�a de %d menos %d � %d\n", A, B, resultado);

    return 0;
}
