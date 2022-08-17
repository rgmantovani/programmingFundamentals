//
//  mat03.c
//  Week3

/* Leia uma matriz quadrada de numeros inteiros [3x3] e verifica se ela é simétrica em relaça diagonal principal */

#include <stdio.h>

int main() {
  
  int matriz[3][3];
  int i, j;
  
  printf("Populando matriz:\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  
  printf("Imprimindo matriz:\n");
  printf("-------------\n");
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------\n");

  //  Solucao Explicita
  if(matriz[0][1] == matriz[1][0] &&
     matriz[0][2] == matriz[2][0] &&
     matriz[1][2] == matriz[2][1]) {
    printf("* Matriz simetrica!\n");
  } else {
    printf("* Matriz nao-simetrica!\n");
  }
    
  return(0);
}

