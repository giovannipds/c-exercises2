#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float base,altura,areaRetangulo;
    
    printf("Informe a base do ret�ngulo (cm): ");
    scanf("%f", &base);
	printf("Informe a altura do ret�ngulo (cm): ");
    scanf("%f", &altura);
    
	areaRetangulo = base*altura;
	
	printf("A �rea do ret�ngulo � %5.2f\n", areaRetangulo);

    return 0;
}
