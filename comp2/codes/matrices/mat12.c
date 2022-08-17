//
//  mat12.c
//  Week3

/* troca os elementos da primeira com a terceira linha */

#include <stdio.h>

int main() {

  int ordem;
  ordem = 5;
  int matriz[ordem][ordem];
  int i, j, coluna;
  int temp;
  

  printf("Populando matriz 1:\n");
  for(i = 0; i < ordem; i++) {
    for(j = 0; j < ordem; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
    
  printf("Imprimindo matriz antes da troca:\n");
  printf("-------------\n");
  for(i = 0; i < ordem; i++) {
    for(j = 0; j < ordem; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------\n");
    
  /* trocando as linhas */
  for(coluna = 0; coluna < ordem; coluna++) {
    temp = matriz[0][coluna];
    matriz[0][coluna] = matriz[2][coluna];
    matriz[2][coluna] = temp;
  }
  
  printf("Imprimindo matriz depois da troca:\n");
  printf("-------------\n");
  for(i = 0; i < ordem; i++) {
    for(j = 0; j < ordem; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------\n");
  
  return (0);
}


