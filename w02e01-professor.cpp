#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int A, B, aux;
    
    A = 10;
    B = 20;
    
    aux = A;
    A = B;
    B = aux;
	
	printf("O valor de A � %d\n", A);
	printf("O valor de B � %d\n", B);

    return 0;
}
