#include<stdio.h>
int main() {
    // declarar variaveis
    int contador, numero;
    float media, soma;
    soma = 0;
    for(contador = 1; contador <= 5; contador = contador + 1){
        // solicitar um numero
        printf("Digite um numero inteiro positivo: ");
        // leitura do numero
        scanf("%i", &numero);
        printf("Soma (antes) = %.2f\n", soma);
        // jogar o numero na soma
        soma = soma + numero;
        printf("Soma (depois) = %.2f\n", soma);
    }
    printf("Soma Final = %.2f\n", soma);
    media = soma/5;
    printf("Media = %f\n", media);
    return 0;
}












