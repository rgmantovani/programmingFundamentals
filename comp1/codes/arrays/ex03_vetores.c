// ler 5 numeros e imprimir na ordem inversa
#include<stdio.h>
int main() {
    //definir um vetor com 5 posicoes
    float vetor[5];
    int indice;
    // leitura dos valores para cada posicao
    for(indice = 0; indice <=4; indice++) {
        printf("Consagrado, fala um nro ai: ");
        scanf("%f", &vetor[indice]);
    }
    // vetor preenchido (ordem correta)
   printf("Vetor = [");
    for(indice = 0; indice <=4; indice ++) {
        printf(" %.2f", vetor[indice]);
    }
    printf("]\n");

    // 0, 1, 2, 3, 4
    // 4, 3, 2, 1, 0
     printf("Vetor = [");
    for(indice = 4; indice >= 0; indice--) {
        printf(" %.2f", vetor[indice]);
    }
      printf("]\n");// imprimir na ordem contraria
    return 0;
}
