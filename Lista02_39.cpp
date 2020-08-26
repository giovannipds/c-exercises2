#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    int numConta,dv,d1,d2,d3,d4,aux;
        
    printf("Informe o número da conta corrente (4 dígitos): ");
    scanf("%d", &numConta);

    aux = numConta;
    
    d1 = (int)aux/1000;
    aux = aux%1000;
    
    d2 = (int)aux/100;
    aux = aux%100;
    
    d3 = (int)aux/10;
    d4 = aux%10;
	
	dv = (d1*d2*d3*d4-(d1+d2+d3+d4))%9;
	
	printf("Conta corrente %d-%d", numConta, dv);
    
    return 0;
}
