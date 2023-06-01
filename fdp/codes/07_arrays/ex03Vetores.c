//Leia 5 números e imprima em ordem inversa de leitura.
#include <stdio.h>
int main() {
	// <tipo> <nome> [ <tamanho> ];
	int indice, vetor[5]; // [ X X X X X]
	// valor inicial; condicao final; inc/decr
	for(indice = 0; indice <= 4; indice = indice + 1) {
		printf("Digite um nro: ");
		scanf("%d", &vetor[indice]);
	}
	for(indice = 4; indice >= 0; indice --) {
		printf("Vetor[%d] = %d\n", indice, vetor[indice]);
	}
	return 0;
}