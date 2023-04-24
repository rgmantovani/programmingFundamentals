#include<stdio.h>
int main() {
    // declarar variaveis
    int contador, numero, soma;
    // 1, 2, 3, 4, 5
    // inicial = 1
    // > 5 (terminar)
    // contador = contador + 1
    soma = 0;
    contador = 1;
    // for(contador = 1; contador <= 5; contador = contador + 1){
    while(contador <= 5) {
        // solicitar um numero
        printf("Digite um numero inteiro positivo: ");
        // leitura do numero
        scanf("%i", &numero);
        printf("Soma (antes) = %d\n", soma);
        // jogar o numero na soma
        soma = soma + numero;
        printf("Soma (depois) = %d\n", soma);
        contador = contador + 1;   
    }

    printf("Soma Final = %d\n", soma);
    return 0;
}
