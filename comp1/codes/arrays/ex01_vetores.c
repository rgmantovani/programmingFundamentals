//Crie um vetor de 5 posições e imprima sem modificar os valores
//iniciais contidos no vetor
#include<stdio.h>
int main() {
    // definilcao de vetor com 5 posicoes
    int vetor[5];
    //indice -> 0 a 4
    int indice;
    for(indice = 0; indice <= 4; indice++) {
       printf("O valor da %d a posicao: %d\n", (indice+1), vetor[indice]);
    }

    /*printf("O valor da 1a posicao: %d\n", vetor[0]);
    printf("O valor da 2a posicao: %d\n", vetor[1]);
    printf("O valor da 3a posicao: %d\n", vetor[2]);
    printf("O valor da 4a posicao: %d\n", vetor[3]);
    printf("O valor da 5a posicao: %d\n", vetor[4]);*/
    return 0;
}
