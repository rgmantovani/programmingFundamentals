//
//  mat03.c
//  Week3

/* Leia uma matriz quadrada de numeros inteiros [NxN] e verifica se ela é simétrica em relaça diagonal principal */

#include <stdio.h>

int main() {
  
  int N;
  printf("Insira a ordem da matriz:\n");
  scanf("%d", &N);
  
  int matriz[N][N];
  int i, j;
  int simetrica = 1;
  
  printf("Populando matriz:\n");
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      scanf("%d", &matriz[i][j]);
    }
  }
  
  printf("Imprimindo matriz:\n");
  printf("-------------\n");
  for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("-------------\n");

  //  Solucao Generica
  for(i = 0; i < N; i ++){
    for(j = i+1; j < N; j++) {
      
      if(matriz[i][j] != matriz[j][i]) {
        simetrica = 0;
        break;
      }
    }
  }
 
  if(simetrica == 1) {
    printf("* Matriz simetrica!\n");
  } else {
    printf("* Matriz nao-simetrica!\n");
  }
    
  return(0);
}

