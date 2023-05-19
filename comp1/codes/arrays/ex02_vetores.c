/*Crie e inicialize um vetor de inteiros e faça a soma dos seus
elementos. Apresente o resultado.*/
#include<stdio.h>
int main() {
    // criar um vetor
    // inicializar os valores do vetor
    int vetor[5]; /* = {12,42,27,32,158};*/
    int indice, soma;
    soma = 0;
    //leitura dos valores (scanf)
    for(indice = 0; indice <=4; indice ++) {
        printf("Meu rei, digite um valor ai: ");
        scanf("%d", &vetor[indice]);
        printf("vetor[%d] = %d\n", indice, vetor[indice]);
        soma = soma + vetor[indice];
    }
    printf("Soma = %d\n", soma);
    return 0;
}
