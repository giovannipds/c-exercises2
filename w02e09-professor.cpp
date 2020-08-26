#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float A,B,soma,sub,mult,div;
    
    printf("Informe o primeiro número: ");
    scanf("%f", &A);
    printf("Informe o segundo número: ");
    scanf("%f", &B);
	    
	soma = A+B;
	sub = A-B;
	mult = A*B;
	div = A/B;
	
	printf("A soma de %5.2f e %5.2f é %5.2f\n", A, B, soma);
	printf("A subtração de %5.2f menos %5.2f é %5.2f\n", A, B, sub);
	printf("O produto de %5.2f por %5.2f é %5.2f\n", A, B, mult);
	printf("A divisão de %5.2f por %5.2f é %5.2f\n", A, B, div);

    return 0;
}
