#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float cat1,cat2,hip;
    
    printf("Informe o comprimento do primeiro cateto (cm): ");
    scanf("%f", &cat1);
    printf("Informe o comprimento do segundo cateto (cm): ");
    scanf("%f", &cat2);
    
	hip = sqrt(pow(cat1,2)+pow(cat2,2));
	
	printf("O comprimento da hipotenusa é %4.2fcm\n", hip);

    return 0;
}
