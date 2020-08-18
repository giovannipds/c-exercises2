#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	int a, b, c;
	printf("Armazenando o valor 10 para A.\n");
	a = 10;
	printf("Armazenando o valor 20 para B.\n");
	b = 20;
	printf("Invertendo seus valores.\n");
	c = a;
	a = b;
	b = c;
	printf("O valor de A é %d e o valor de B é %d.\n", a, b);
	return 1;
}
