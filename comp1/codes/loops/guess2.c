#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int palpite, numero;
    int totalPalpites = 0;
    // - computador definir um nro aleatorio
    srand((unsigned) time (NULL)); // inicia gerador de números aleatórios
    numero = (rand() % 100) + 1;  // 0 a 100
    do{
    // - usuario realizar um palplite
        printf("Qual seu palpite? ");
        scanf("%d", &palpite);
        totalPalpites = totalPalpites + 1;
    //      feedback:
        if(palpite > numero) {
            printf("Menor\n");
        }
        if(palpite < numero) {
            printf("Maior\n");
        }
    }while(palpite != numero);
    printf("Acertou miseravi. O nro pensado foi: %d\n", numero);
    printf("Total de palpites = %d\n", totalPalpites);
    return 0;

}

















