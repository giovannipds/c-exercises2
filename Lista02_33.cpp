#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A,B,aux;
    
    printf("Informe o primeiro número (A): ");
    scanf("%d", &A);
	printf("Informe o segundo número (B): ");
    scanf("%d", &B);
    
	aux = A;
	A = B;
	B = aux;
	
	printf("O valor de A é %d\n", A);
	printf("O valor de B é %d\n", B);

    return 0;
}
