#include <stdio.h>
#include <stdbool.h> // true e false
#include <time.h>    // time (tempo)
#include <stdlib.h>  // rand e srand

int main() {
	
	int N, palpite;
	bool acertou;
	int tentativas = 0;
	
	// gerar aleatoriamente o nro N
	srand((unsigned)time(NULL));
	N = (rand() % 99) + 1;
	//printf("Nro gerado = %d\n", N);
	
	// inicializacao
	acertou = false; // nao acertou o palpite
	while(!acertou) { // ! -> operador de negacao (inverte o valor logico)
	// controlar o fluxo
	// pegar o palpite do usuario
		printf("Qual o seu palpite: ");
		scanf("%d", &palpite);
		tentativas = tentativas + 1;
		// 1 - valores podem ser iguais
		if(N == palpite) {
			acertou = true;
			printf("Acertou miseravi. O valor era: %d\n", N);
			printf("Foram usadas %d tentativas\n", tentativas);
		} else {
			// 2 - N > paplite
			if(N > palpite) {
				printf("Dica: o valor e maior!\n");
			} else {
				// 3 - N < palpite
				printf("Dica: o valor e menor!\n");
			}
		}
	}
	return 0;
}