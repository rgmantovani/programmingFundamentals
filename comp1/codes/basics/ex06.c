#include<stdio.h>

int main() {
	float A1, A2, A3, Premio;
	float totalApostas, percA1, percA2, percA3;
	float P1, P2, P3;
	//informar os valores das apostas e do premio
	printf("Por favor, digite os valores das apostas: ");
	scanf("%f %f %f", &A1, &A2, &A3);
	printf("Qual o valor do premio? ");
	scanf("%f", &Premio);
	//calcular o total das apostas
	totalApostas = A1 + A2 + A3;
	printf("Total das apostas = %.2f\n", totalApostas);
	//calcular % da aposta de cada amigo
	percA1 = A1/totalApostas;
	percA2 = A2/totalApostas;
	percA3 = A3/totalApostas;
	printf("Perc das apostas = %.2f %.2f %.2f\n", percA1, percA2, percA3);
	//calcular o premio de cada amigo
	P1 = percA1 * Premio;
	P2 = percA2 * Premio;
	P3 = percA3 * Premio;
	printf("Premio do amigo 1: %.2f\n", P1);
	printf("Premio do amigo 2: %.2f\n", P2);
	printf("Premio do amigo 3: %.2f\n", P3);
	return 0;
}