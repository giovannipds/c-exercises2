#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float w, h, imc;
	
	printf("Oi! Quanto você pesa? ");
	scanf("%f", &w);
	
	printf("Qual a sua altura? ");
	scanf("%f", &h);
		
	imc = w / (h * h);
	printf("De acordo com essas informações, seu IMC é %.2f.\n", imc);
	
	if (imc < 18.5) {
		printf("Isso diz que você está magro!");
	} else if (imc >= 18.5 && imc < 25) {
		printf("Você está no seu peso normal.");
	} else if (imc >= 25 && imc < 30) {
		printf("Você está com sobrepeso.");
	} else if (imc >= 30 && imc < 40) {
		printf("Você está acima do peso!");
	} else {
		printf("Você está com uma obesidade grave, cuidado!");
	}
	
	return 1;
}
