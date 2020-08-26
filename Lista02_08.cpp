#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num1,num2,resultado;
    
    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    printf("Informe o segundo número: ");
    scanf("%d", &num2);
	    
	resultado = pow(num1,2)+pow(num2,2);
	
	printf("A soma dos quadrados de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}
