#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int computer, player;
    char winner; // c, p
    // 1. computador determina jogada dele
    srand( (unsigned) time (NULL)); // inicia gerador de números aleatórios 
    computer = (rand() % 3) + 1; // gera números aleatórios entre 0 e 2 {0, 1, 2} 
    //printf("Jogada do comp: %d\n", computer);
    // 2. Jogo começa. Pedir a jogada do usuario
    printf("Pedra (1), Papel (2), Tesoura (3): ");
    scanf("%d", &player);
    printf("Jogada do player: %d\n", player);
    // a) usuario escolhe uma opcao invalida (erro!)
    if(player != 1 && player !=2 && player !=3 ) {
        printf("Erro. Escolha invalida!\n"); // termina
    } else {
        // b) verifico se sao iguais (empate!)
        if(computer == player) {
            printf("Empate!\n");
        } else {
            // c) se escolhas nao sao iguais (alguem ganhou, e alguem perdeu)
             //    * Regras (Pedra -> Tesoura, Tesoura -> Papel, Papel -> Pedra)
             switch(computer){
                 case 1: // computador = pedra, usuario = {papel, tesoura}
                    if (computer == 1 && player == 2) {
                        winner = 'p';
                    } else {
                        winner = 'c';
                    }
                    break;
                 case 2: // computador = papel, usuario = {pedra, tesoura}
                    if(computer == 2 && player == 1) {
                        winner = 'c';
                    } else {
                        winner = 'p';
                    }
                    break;
                 case 3: // computador = tesoura, usuario = {pedra, papel}
                    if(computer == 3 && player == 1) {
                       winner = 'p';                    
                    } else {
                         winner = 'c';
                    } 
                    break;
             } // switch
             if(winner == 'c') {
                 printf("Computer wins.");
             } else {
                 printf("Player wins.");
             }
             switch (computer) {
                case 1: printf(" Escolhi: Pedra\n"); break;
                case 2: printf(" Escolhi: Papel\n"); break;
                case 3: printf(" Escolhi: Tesoura\n"); break;
             }
        }
    }
    return 0;
}

