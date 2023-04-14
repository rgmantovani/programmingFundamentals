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
    switch (valor)
    {
        case 1: printf("Domingoooooooo\n");
            break;
        case 2:printf("Segundou\n");
            break;
        case 3: printf("Força que ainda é terça!\n");
            break;
        case 4: printf("Quarta-feira\n");
            break;
        case 5: printf("Quinta-feira\n");
            break;
        case 6: printf("Dia de role!\n");
            break;
        case 7: printf("Dia de role! Parte 2\n");
            break;
        default:
            printf("Para de ser adalberto rapaz!\n");
            break;
    }

    return 0;
}