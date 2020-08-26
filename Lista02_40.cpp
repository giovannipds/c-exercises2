#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int numero,d1,d2,d3,aux,invertido;
        
    printf("Informe um número (3 dígitos): ");
    scanf("%d", &numero);

    aux = numero;
    
    d1 = (int)aux/100;
    aux = aux%100;
    
    d2 = (int)aux/10;
    d3 = aux%10;
	
	invertido = d1+d2*10+d3*100;
	
	printf("O número invertido é %d", invertido);
    
    return 0;
}
