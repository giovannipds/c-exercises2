#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float lado,areaQuadrado;
    
    printf("Informe o valor do lado do quadrado (cm): ");
    scanf("%f", &lado);
    
	areaQuadrado = lado*lado;
	
	printf("A �rea do quadrado � %5.2f\n", areaQuadrado);

    return 0;
}
