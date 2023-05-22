#include <stdio.h>
int main() {
	/* definir um vetor de 5 posicoes, - ok
	inicializar os valores			   - ok
	calcular a soma dos elementos */

	int vetor [5];// = {99, 100, 77, 76, 4}; 
	int indice;
	int soma = 0; // !

	// valor inicial; condicao final; inc/decr
	for(indice = 0; indice <= 4; indice = indice + 1) {
		printf("Digite um nro: ");
		scanf("%d", &vetor[indice]);
	}
	
	printf("Vetor = [");
	for(indice = 0; indice <= 4; indice = indice + 1) {
		printf(" [%d]", vetor[indice]);
		soma = soma + vetor[indice];
	}
	printf("]\n");
	printf("Soma = %d\n", soma);

	return 0;
}