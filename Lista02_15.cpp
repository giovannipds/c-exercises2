#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int X,Y,resultado;
    
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &X);
	printf("Informe o segundo n�mero: ");
    scanf("%d", &Y);
    
	resultado = pow(X,Y);
	
	printf("O valor de %d elevado � pot�ncia %d � %d\n", X, Y, resultado);

    return 0;
}
