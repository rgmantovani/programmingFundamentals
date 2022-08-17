#include <stdio.h>

int main(int argc, const char * argv[]) {
  
  int ordem = 2;
  int mat[ordem][ordem];
  
  int i, j;
  
  //inicia a matriz
  for(i = 0; i < ordem; i++) {
    for(j = 0; j < ordem; j++) {
      
      //leitura do usuario
      scanf("%d", &mat[i][j]);  //leitura do user
      
     //criar matriz identidade
//        if(i == j) {
//          mat[i][j] = 1;
//        } else {
//          mat[i][j] = 0;
//       }
    }
  }
  
  // impressao da matriz
  printf("--------------\n");
  for(i = 0; i < ordem; i++) {
    for(j = 0; j < ordem; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }  
  printf("--------------\n");
  
  return 0;
}

