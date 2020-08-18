#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int r;
	float v;
	
	const float PI = 3.14159265359;
	
	printf("Informe o valor de raio da esfera para calcular o volume: ");
	scanf("%d", &r);
		
	v = (4 * PI * pow(r, 3)) / 3;
	printf("O volume dessa esfera é de %.2f un³.", v);
	
	return 1;
}
