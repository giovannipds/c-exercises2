#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	double A, r;
	const float PI = 3.14159265359;
	printf("Para calcular a �rea do c�rculo, precisamos saber o valor do raio.\n");
	printf("Para qual valor de raio queres calcular? ");
	scanf("%lf", &r);
	A = PI * pow(r, 2);
	printf("Para raio %.2lf, a �rea do c�rculo � de %.2lf", r, A);
	return 1;
}
