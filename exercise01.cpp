#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	int a = 10, b = 20, c;
	c = a;
	a = b;
	b = c;
	printf("O valor de A � %d e o valor de B � %d.", a, b);
	return 1;
}
