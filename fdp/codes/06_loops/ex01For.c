#include<stdio.h>
int main() {
    // declarar variaveis
    int contador, numero, soma;
    // 1, 2, 3, 4, 5
    // inicial = 1
    // > 5 (terminar)
    // contador = contador + 1
    //  for(condicao inicial, condicao parada, incremento)
    soma = 0;
    for(contador = 1; contador <= 5; contador = contador + 1){
        // solicitar um numero
        printf("Digite um numero inteiro positivo: ");
        // leitura do numero
        scanf("%i", &numero);
        printf("Soma (antes) = %d\n", soma);
        // jogar o numero na soma
        soma = soma + numero;
        printf("Soma (depois) = %d\n", soma);
    }
    printf("Soma Final = %d\n", soma);
    return 0;
}
