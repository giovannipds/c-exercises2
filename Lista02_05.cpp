#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num,numAnterior;
    
    printf("Informe um n�mero: ");
    scanf("%d", &num);

	numAnterior = num-2;
	
	printf("O n�mero anterior ao antecessor de %d � %d\n", num, numAnterior);

    return 0;
}
