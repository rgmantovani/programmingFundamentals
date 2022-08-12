#include<stdio.h>

int main() {

    int i, num[5];      //declaracao de variaveis

    // laço de repetição para leitura dos valores
    // o contador (i) varia de 0 até 4

    for(i = 0;i <= 4;i++) {
       printf(“Digite a nota %i: ”, i);
       scanf(“%d”, &num[i]);
     }

    //laço de repetição para impessão dos valores
    // o contador (i) varia de 4 até 0
    // apresenta os valores na ordem inversa
    for(i = 4; i >= 0; i--) {
       printf(“%d ”, num[i]);
    }

    return 0;
}
