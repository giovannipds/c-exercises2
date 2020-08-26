#include <stdio.h>
#include <windows.h>
#include <math.h>

const float PI = 3.14159265359;

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float raio,volumeEsfera;
    
    printf("Informe o raio da esfera (cm): ");
    scanf("%f", &raio);
    
	volumeEsfera = 4*PI*pow(raio,3)/3;
	
	printf("O volume da esfera é %5.2fcm³\n", volumeEsfera);

    return 0;
}
