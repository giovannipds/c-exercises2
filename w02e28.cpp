#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int a, b, c;
	float d, x1, x2, rd, a2;
	
	printf("Informe o coeficiente a: ");
	scanf("%d", &a);
	
	printf("Informe o coeficiente b: ");
	scanf("%d", &b);
	
	printf("Informe o coeficiente c: ");
	scanf("%d", &c);
	
	d = pow(b, 2) - 4 * a * c;
	// printf("Delta é %.2f\n", d);
	
	rd = sqrt(d);
	a2 = 2 * a;
	x1 = (-b + rd) / a2;
	x2 = (-b - rd) / a2;
	printf("As raízes x1 e x2 são, respectivamente, %.2f e %.2f", x1, x2);

	return 1;
}
