#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,aux;
    
    printf("Informe o primeiro n�mero (A): ");
    scanf("%d", &A);
	printf("Informe o segundo n�mero (B): ");
    scanf("%d", &B);
    
	aux = A;
	A = B;
	B = aux;
	
	printf("O valor de A � %d\n", A);
	printf("O valor de B � %d\n", B);

    return 0;
}
