#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int num,numAnterior;
    
    printf("Informe um número: ");
    scanf("%d", &num);

	numAnterior = num-2;
	
	printf("O número anterior ao antecessor de %d é %d\n", num, numAnterior);

    return 0;
}
