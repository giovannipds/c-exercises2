#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int b, h;
	float a;
	
	printf("Digite o valor da base do triãngulo: ");
	scanf("%d", &b);
	
	printf("Digite a altura do triângulo: ");
	scanf("%d", &h);
		
	a = b * h / 2;
	printf("A área desse triângulo é de %.2f un².", a);
	
	return 1;
}
