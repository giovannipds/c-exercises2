#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float n1, n2, n3, mpf;
	int p1 = 2, p2 = 3, p3 = 5;
	
	printf("Qual sua primeira nota? ");
	scanf("%f", &n1);
	
	printf("Qual sua segunda nota? ");
	scanf("%f", &n2);
	
	printf("Qual sua terceira nota? ");
	scanf("%f", &n3);
		
	mpf = (n1 * p1 + n2 * p2 + n3 * p3) / 10;
	printf("A média final deste aluno é de %.2f", mpf);
	
	return 1;
}
