#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int anos,meses,dias,totalDias;
    
    printf("Informe a quantidade de anos: ");
    scanf("%d", &anos);
    printf("Informe a quantidade de meses: ");
    scanf("%d", &meses);
    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);
    
	totalDias = anos*365+meses*30+dias;
	
	printf("A idade da pessoa expressa em dias é %d\n", totalDias);

    return 0;
}
