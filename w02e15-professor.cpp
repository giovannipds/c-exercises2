#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int X,Y,resultado;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &X);
	printf("Informe o segundo número: ");
    scanf("%d", &Y);
    
	resultado = pow(X,Y);
	
	printf("O valor de %d elevado à potência %d é %d\n", X, Y, resultado);

    return 0;
}
