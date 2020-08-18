#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float x, a;
	int d;
	
	printf("Vamos calcular quantos degraus temos que subir numa escada. :D\n");
	
	printf("Informe a altura do degrau (em cm): ");
	scanf("%f", &x);
	
	printf("Agora informe até que altura deseja subir: ");
	scanf("%f", &a);
		
	d = ceil(a / x);
	printf("Para chegar e/ou passar dessa altura,\nvocê precisa subir pelo menos %d degrau(s).", d);
	
	return 1;
}
