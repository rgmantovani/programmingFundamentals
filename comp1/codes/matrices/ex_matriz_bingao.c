#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ORDEM 5
int main(){
    // gerar cartela de bingo com numeros de 0-99
    int cartela[5][5];
    int indL, indC;    // for
    int numeroAleatorio;
    srand(time(NULL));

    // TODO: pensar em como evitar que numeros repetidos
    // sejam atribuidos em uma mesma coluna
    // IDEIA: usar vetor auxiliar
    for(indC = 0; indC < ORDEM; indC++) {
        for(indL = 0; indL < ORDEM; indL++) {
            numeroAleatorio = rand() % 19 + (indC * 20);
            printf("Numero aleatorio = %d\n", numeroAleatorio);
            cartela[indC][indL] = numeroAleatorio;
        }
    }
    printf(" \n ---------------------- \n");
    // imprimir a matriz (cartela)
    for(indC = 0; indC < ORDEM; indC++) {
        for(indL = 0; indL < ORDEM; indL++) {
            // acessar uma celula
            printf("\t%d", cartela[indL][indC]);
        }
        printf("\n");
    }

    return 0;
}

