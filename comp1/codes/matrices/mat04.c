//
//  mat04.c
//  Week3
//
//Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva a localizacao (linha,coluna) do maior valor encontrado na matriz.

#include <stdio.h>

int main() {
  
  int matriz[5][5];
  int i, j, linha, coluna, maior;
  
  printf("Populando matriz:\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  
  printf("Imprimindo matriz:\n");
  printf("-------------\n");
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------\n");
  
//  encontrando o maior elemento
  linha = 0;
  coluna = 0;
  maior = matriz[0][0];
  
  for(i = 0; i < 5; i++) {
    for(j = 0; j < 5; j++) {
      
      if(matriz[i][j] > maior) {
        maior = matriz[i][j];
        linha = i;
        coluna = j;
      }
    }
  }
  
  printf("* Maior elemento: %d\n", maior);
  printf("* Posicao [%d %d]\n", linha+1, coluna+1);
  
  return (0);
}

