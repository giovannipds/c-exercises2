#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float base,altura,areaTriangulo;
    
    printf("Informe a base do tri�ngulo (cm): ");
    scanf("%f", &base);
	printf("Informe a altura do tri�ngulo (cm): ");
    scanf("%f", &altura);
    
	areaTriangulo = base*altura/2;
	
	printf("A �rea do tri�ngulo � %5.2f\n", areaTriangulo);

    return 0;
}
