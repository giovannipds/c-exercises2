#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	int v, prev2;
	printf("Digite um valor qualquer: ");
	scanf("%d", &v);
	prev2 = v - 2;
	printf("O valor anterior de seu antecessor é %d.", prev2);
	return 1;
}
