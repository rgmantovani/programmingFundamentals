// Multiplicacao de matrizes

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
  int A [2][3] = {{3,7,10}, {1,5,0}};   // matriz [2x3]
  int D [3][2] = {{1,2}, {5,6}, {2,3}}; // matriz [3,2]
  int AD[2][2] = {{0,0}, {0,0}};        // matriz [2x2]

  //contadores
  int i, j, k;

  for(i = 0; i < 2; i++) {      // fixa uma linha de A
    for(j = 0; j < 2; j++) {    // fixa coluna de D
      for(k = 0; k < 3; k++) {  // multiplica a linha pela coluna
        AD[i][j] = AD[i][j] + A[i][k]*D[k][j];
      }
      printf("%i\t",AD[i][j]);
    }
    printf("\n");
  }
  return 0;
}

