#include <stdio.h>
#include <windows.h>
//#include <math.h>

const float PI = 3.14159265359;

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float raio,Area;
    
    printf("Informe o tamanho do raio (cm): ");
    scanf("%f", &raio);

	//Area = PI*pow(raio,2);
	Area = PI*raio*raio;
	
	printf("A �rea do c�rculo de raio %5.2fcm � %5.2fcm�\n", raio, Area);

    return 0; //152 
}
