#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	int side, p, a;
	
	printf("Digite o valor do lado de um quadrado: ");
	scanf("%d", &side);
			
	a = side * side;
	p = 4 * side;
	printf("A �rea desse quadrado � de %d un� e o per�metro � de %d.", a, p);
	
	return 1;
}
