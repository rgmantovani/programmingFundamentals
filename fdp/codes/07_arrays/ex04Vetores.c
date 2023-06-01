/*Leia um vetor A com 10 elementos inteiros correspondentes 
as idades de um grupo de pessoas. 
Escreva um programa que determine e escreva a quantidade de 
pessoas que possuem idade superior a 35 anos.*/
#define TAMANHO 10
#include <stdio.h>
int main() {

	int idades[TAMANHO], indice, acima35anos = 0;
	int temp;

	for(indice = 0; indice <= (TAMANHO-1); indice++) {
		do{ //Nao pode ter idade negativa
			printf("Digite um nro: ");
			scanf("%d", &idades[indice]);
		}while(idades[indice] < 0);
		printf("Deu bom! Segue o jogo\n");
		if(idades[indice] > 35) {
			acima35anos = acima35anos+1;
		}		
	}
	printf("Vetor = [");
	for(indice = 0; indice <= (TAMANHO-1); indice++) {
		printf(" [%d]", idades[indice]);
	}
	printf("]\n");
	printf(" Acima de 35 anos = %d\n", acima35anos);

	return 0;
}
