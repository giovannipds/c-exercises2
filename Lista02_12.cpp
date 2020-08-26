#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float base,altura,areaTriangulo;
    
    printf("Informe a base do triângulo (cm): ");
    scanf("%f", &base);
	printf("Informe a altura do triângulo (cm): ");
    scanf("%f", &altura);
    
	areaTriangulo = base*altura/2;
	
	printf("A área do triângulo é %5.2f\n", areaTriangulo);

    return 0;
}
