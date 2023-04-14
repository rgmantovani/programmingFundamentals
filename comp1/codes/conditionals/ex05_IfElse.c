#include<stdio.h>
int main() {
    // variaveis
    int valor;
    // solicitar um valor
    printf("Ow maluco, digite um valor ai: ");
    // leitura do valor
    scanf("%i", &valor);
    printf("Valor = %i\n", valor);
    // avaliar e soltar a correspondente msg
    if(valor == 1) {
        printf("Domingoooooooo\n");
    }
    else if(valor == 2) {
        printf("Segundou\n");
    }
    else if (valor == 3) {
        printf("Força que ainda é terça!\n");
    }
    else if (valor == 4) {
        printf("Quarta-feira\n");
    }
    else if(valor == 5) {
        printf("Quinta-feira\n");
    }
    else if(valor == 6) {
        printf("Sextouuuuu\n");
    }
    else if(valor == 7) {
        printf("Dia de role!\n");
    }
    else {
        printf("Para de ser adalberto rapaz!\n");
    }
    return 0;
}