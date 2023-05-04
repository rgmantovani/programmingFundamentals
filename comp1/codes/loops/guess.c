#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int palpite, numero;
    int totalPalpites = 0;
    // - computador definir um nro aleatorio
    srand((unsigned) time (NULL)); // inicia gerador de números aleatórios
    numero = (rand() % 100) + 1;  // 0 a 100
    //printf("Numero = %d\n", numero);
    // - usuario realizar um palplite
    printf("Qual seu palpite? ");
    scanf("%d", &palpite);
    totalPalpites = totalPalpites + 1;
    // - enquanto o palpite != nro
    while(palpite != numero) {
    //      feedback:
        if(palpite > numero) {
            printf("Menor\n");
        } else {
            printf("Maior\n");
        }
         printf("Qual seu novo palpite? ");
         scanf("%d", &palpite);
         totalPalpites = totalPalpites + 1;
      }
    printf("Acertou miseravi. O nro pensado foi: %d\n", numero);
    printf("Total de palpites = %d\n", totalPalpites);
    return 0;

}

















