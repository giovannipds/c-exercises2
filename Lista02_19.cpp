#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int nota1,nota2,nota3;
	float media;
    
    printf("Informe a Nota 1: ");
    scanf("%d", &nota1);
    printf("Informe a Nota 2: ");
    scanf("%d", &nota2);
    printf("Informe a Nota 3: ");
    scanf("%d", &nota3);
    
	media = ((float)nota1*2+nota2*3+nota3*5)/10;
	
	printf("A média final do aluno é %2.1f\n", media);

    return 0;
}
