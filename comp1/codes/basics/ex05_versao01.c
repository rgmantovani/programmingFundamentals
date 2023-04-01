#include<stdio.h>

int main() {
	//declaracao das variaveis
	float A, B, C, MH;
	//pedir p informar o valor de A
	printf("Informe o valor de A: \n");
	//leitura de A
	scanf("%f", &A);
	//pedir p informar o valor de B
	printf("Informe o valor de B: \n");
	//leitura de B
	scanf("%f", &B);
	//pedir p informar o valor de C
	printf("Informe o valor de C: \n");
	//leitura de C
	scanf("%f", &C);
	// Processamento (calculo da media harmonica MH)
	MH = 3 / (1/A + 1/B + 1/C);
	//mostrar o resultado que foi calculado
	printf("O valor de MH = %f\n", MH);
	return 0;
}