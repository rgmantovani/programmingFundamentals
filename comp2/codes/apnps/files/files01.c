
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ------------------------------------------- */
/* Exercicio 01                                */
/* ------------------------------------------- */
/*
 
 Crie manualmente um arquivo de texto com uma matriz 5 x 5
 de números inteiros. Faça um programa que, a partir da leitura
 desse arquivo texto, preencha uma matriz usando o comando fscanf.
 Em seguida, mostre a matriz lida do arquivo.

 */

/* ------------------------------------------- */
/* ------------------------------------------- */

int main(int argc, const char * argv[]) {

  /* 1 - cria a variavel de arquivo texto para leitura */
  FILE *input;
  
  /* 2 - inicializa o buffer (arquivo) e realiza controle de erros */
  input = fopen("ex01.txt", "r");
  if(input == NULL) {
    printf("Erro ao abrir arquivo para leitura.\n Provavelmente ele não existe.\n Crie o arquivo e repita o processo.\n");
    return(EXIT_FAILURE);
  }

  /* 3 - logica do programa */
  int TAM = 5;
  int matriz[TAM][TAM];
  
  int i, j;
  
  for(i = 0; i < TAM; i++) {
    fscanf(input,"%d %d %d %d %d\n", &matriz[i][0], &matriz[i][1],
           &matriz[i][2], &matriz[i][3], &matriz[i][4]);
  }
  
  printf("-------------------------------\n");
  for(i = 0; i < TAM; i++) {
    for(j = 0; j < TAM; j++) {
      printf("%2d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------------------------\n");

  /* 4 - fecha o buffer (arquivo) */
  fclose(input);
  return 0;
}

/* ------------------------------------------- */
/* ------------------------------------------- */

