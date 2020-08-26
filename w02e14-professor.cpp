#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float base,altura,areaRetangulo;
    
    printf("Informe a base do retângulo (cm): ");
    scanf("%f", &base);
	printf("Informe a altura do retângulo (cm): ");
    scanf("%f", &altura);
    
	areaRetangulo = base*altura;
	
	printf("A área do retângulo é %5.2f\n", areaRetangulo);

    return 0;
}
