#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int side, p, a;
	
	printf("Digite o valor do lado de um quadrado: ");
	scanf("%d", &side);
			
	a = side * side;
	p = 4 * side;
	printf("A área desse quadrado é de %d un² e o perímetro é de %d.", a, p);
	
	return 1;
}
