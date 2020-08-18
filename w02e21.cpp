#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1252);
	
	float w, h, imc;
	
	printf("Oi! Quanto voc� pesa? ");
	scanf("%f", &w);
	
	printf("Qual a sua altura? ");
	scanf("%f", &h);
		
	imc = w / (h * h);
	printf("De acordo com essas informa��es, seu IMC � %.2f.\n", imc);
	
	if (imc < 18.5) {
		printf("Isso diz que voc� est� magro!");
	} else if (imc >= 18.5 && imc < 25) {
		printf("Voc� est� no seu peso normal.");
	} else if (imc >= 25 && imc < 30) {
		printf("Voc� est� com sobrepeso.");
	} else if (imc >= 30 && imc < 40) {
		printf("Voc� est� acima do peso!");
	} else {
		printf("Voc� est� com uma obesidade grave, cuidado!");
	}
	
	return 1;
}
