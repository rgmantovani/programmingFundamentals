#include<stdio.h>

int main() {
	//declaracao das variaveis
	float A, B, C, MH;
	//pedir p informar os valores de A B e C
	printf("Informe os valores de A B C: \n");
	//leitura de A
	scanf("%f %f %f", &A, &B, &C);
	// Processamento (calculo da media harmonica MH)
	MH = 3 / (1/A + 1/B + 1/C);
	//mostrar o resultado que foi calculado
	printf("O valor de MH = %f\n", MH);
	return 0;
}