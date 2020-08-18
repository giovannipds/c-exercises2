#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float c, l, a, vol;
	
	printf("Vamos calcular o volume de uma caixa.\n");
//	system("pause");
	
	printf("Informe seu comprimento: ");
	scanf("%f", &c);
	
	printf("Informe agora a largura: ");
	scanf("%f", &l);
	
	printf("Informe a altura: ");
	scanf("%f", &a);
		
	vol = c * l * a;
	printf("O volume dessa caixa é %.2f un³.", vol);
	
	return 1;
}
