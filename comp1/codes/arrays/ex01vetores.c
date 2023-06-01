#include <stdio.h>
int main() {
	/* definir um vetor de 5 posicoes, e imprimir os valores
	sem modificar o vetor*/
	// <tipo> <nome> [ <tamanho> ];
	int vetor [5]; // [ X X X X X]
	int indice;
	// valor inicial; condicao final; inc/decr
	for(indice = 0; indice <= 4; indice = indice + 1) {
		printf("Indice: %d\n", indice);
		printf("Vetor[%d] = %d\n", indice, vetor[indice]);
	}
	return 0;
}