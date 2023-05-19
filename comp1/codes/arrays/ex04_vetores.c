/*Leia um vetor A com 10 elementos inteiros correspondentes as
idades de um grupo de pessoas. Escreva um programa que
determine e escreva a quantidade de pessoas que possuem
idade superior a 35 anos. */
#include<stdio.h>
int main() {
    //ler um vetor A com 10 elementos
    int idades[10];
    int indice, acima35;
    acima35 = 0;
    // determinar qtde de pessoas acima de 35 anos
    for(indice = 0; indice <= 9; indice++) {
        printf("Ow comedia, da as idade ai: ");
        scanf("%d", &idades[indice]);
        if(idades[indice] > 35) {
            acima35 = acima35 + 1;
        }
    }
    printf("Idades =[ ");
    for(indice = 0; indice <= 9; indice++) {
        printf(" %d", idades[indice]);
    }
    printf("]\n");
    printf("Jovens = %d\n", acima35);
    return 0;
}
