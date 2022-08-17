//
//  struct12.c
//  Week4Structs

/* Baseado em um baralho tradicional (cada carta tem um naipe e um valor),
implemente aparte de distribui ̧c ̃ao (sorteio) de cartas para 2 jogadores.
Considere que cada jogador ir ́a receber 5 cartas.Exiba na tela as cartas
que cada jogador recebeu. */

#include <stdio.h>

/* true/false -> 0/1*/
#include <stdbool.h>

/* para geracao de numeros aleatorio */
#include <time.h>
#include <stdlib.h>

/* 1 - definir Tipo carta */
typedef struct{
  char naipe;
  char simbolo;
  bool jogada;
} Carta;


int main() {

  /*2 - definir baralho
   baralho é uma matriz de cartas
   - 4 naipes, 13 simbolos */
  Carta baralho[4][13];

  /* Precisamos:
   1 - inicializar as cartas, indicar que todas elas nao foram jogadas aindas (jogadas = false)
   2 - selecionar aleatoriamente 5 cartas para o jogador 1 (imprimir)
   3 - selecionar aleatoriamente outras 5 cartas para o jogador 2 (imprimir)
   */

  /* inicializando baralho */
  int i, j;
  char simbolos[13] = {'A','2','3','4','5','6','7','8','9','D','J','Q','K'};
  char naipes[4] = {'P','E','C','O'};

  /* percorrer todas as posicoes e fazer atribuicoes [i,j]*/
  for(i = 0; i < 4; i ++){  // linhas -> naipes
    for(j = 0; j < 13; j++) {  // colunas -> simbolos
      baralho[i][j].naipe   = naipes[i];
      baralho[i][j].simbolo = simbolos[j];
      baralho[i][j].jogada  = false;
    }
  }

  /* Debug: Imprimindo baralho */
  for(i = 0; i < 4; i ++){
    for(j = 0; j < 13; j++) {
      printf("[%c %c j:%d]", baralho[i][j].simbolo,
             baralho[i][j].naipe, baralho[i][j].jogada);
    }
    printf("\n");
  }

  /* inicializa o gerador de numeros aleatorios
   https:www.tutorialspoint.com/c_standard_library/c_function_srand.htm
//   */
  time_t t;
  srand((unsigned) time(&t));

  /* distribuição das cartas
    - 5 para jogador 1*/
  int cont = 0;
  int linha, coluna;

  printf("\n--------------\n");
  printf("Jogador 1: \n");
  printf("--------------\n");

  /* Enquanto o jogador nao receber 5 cartas ... */
  while(cont != 5) {

    /* Sortear uma carta */
    /* gerar linha e coluna aleatoria (sortear carta) */
    linha  = rand() & 3;  // [0-3]
    coluna = rand() & 12; // [0-12]

    /* se essa posicao ja foi sorteada anteriormente */
    if(baralho[linha][coluna].jogada == false) {
      baralho[linha][coluna].jogada = true;
      printf("[%c %c]", baralho[linha][coluna].simbolo,
             baralho[linha][coluna].naipe);
      cont++;
    }
  }
  printf("\n");

//  /* distribuição das cartas
//    - 5 para jogador 2*/
  printf("\n--------------\n");
  printf("Jogador 2: \n");
  printf("--------------\n");

  cont = 0;

// cartas[5] = distribuir cartas(qnt 5)
// cartas[5] = distribuir cartas(qnt 5)
  while(cont != 5) {

    /* gerar linha e coluna aleatoria (sortear carta) */
    linha  = rand() & 3;  // [0-3]
    coluna = rand() & 12; // [0-12]

    if(baralho[linha][coluna].jogada == false) {
      baralho[linha][coluna].jogada = true;
      printf("[%c %c]", baralho[linha][coluna].simbolo,
             baralho[linha][coluna].naipe);
      cont++;
    }
  }
  printf("\n--------------\n");


  /* Debug: Imprimindo baralho */
  for(i = 0; i < 4; i ++){
    for(j = 0; j < 13; j++) {
      printf("[%c %c j:%d]", baralho[i][j].simbolo,
             baralho[i][j].naipe, baralho[i][j].jogada);
    }
    printf("\n");
  }

  return(0);
}
