#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1252);
    
    float a,b,c,delta,x1,x2;
    
	printf("ax²+bx+c\n\n");
    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);
    
	delta = pow(b,2)-4*a*c;
	x1 = (-b + pow(delta,0.5)) / (2*a);
	x2 = (-b - pow(delta,0.5)) / (2*a);
	
	printf("As raízes da equação são:\n");
	printf("x1 = %3.6f\n", x1);
	printf("x2 = %3.6f\n", x2);

    return 0;
}
