#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float pesoSacoKg,qtdRacaoPorGato,saldoSaco;
    
    printf("Informe o peso do saco de ração (Kg): ");
    scanf("%f", &pesoSacoKg);
    printf("Informe a quantidade de ração consumida por gato (g): ");
    scanf("%f", &qtdRacaoPorGato);
    
	saldoSaco = pesoSacoKg*1000-5*(qtdRacaoPorGato*2);
	
	printf("Após cinco dias de uso, sobrarão no saco %4.2fg\n", saldoSaco);

    return 0;
}
