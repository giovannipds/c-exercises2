#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float comp,larg,alt,volume;
    
    printf("Informe o comprimento da caixa (cm): ");
    scanf("%f", &comp);
    printf("Informe a largura da caixa (cm): ");
    scanf("%f", &larg);
	printf("Informe a altura da caixa (cm): ");
    scanf("%f", &alt);

    
	volume = comp*larg*alt;
	
	printf("O volume da caixa retangular é %6.2fcm³\n", volume);

    return 0;
}
