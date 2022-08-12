//  ex1578.c
// saida nao formatada no padrao do URI

#include <stdio.h>
int main(int argc, const char * argv[]) {

  int N;             // numero de matrizes
  int ordem;         // ordem das matrizes
  int casos;         // contador para controlar o numero de matrizes/casos manipulados
  int i, j;          // contadores
  
  scanf("%d", &N);   // lendo o numero de matrizes

  // repetindo p ler os N casos (N matrizes)
  for(casos = 0; casos < N; casos ++) {
    
    scanf("%d", &ordem);
     
    long double auxMat[ordem][ordem];
    long double finMat[ordem][ordem];
      
    //printf para debug
//    printf("------------------\n");
//    printf("N = %d\n", N);
//    printf("M = %d\n", ordem);
//    printf("------------------\n");

    // leitura das matrizes
    for(i = 0; i < ordem; i++) {
      for(j = 0; j < ordem; j++) {
        scanf("%Lf", &auxMat[i][j]);
        finMat[i][j] = auxMat[i][j] * auxMat[i][j];  // quadrado da matriz de saida
      }
    }
    
    // impressao da matriz (debug)
//    printf("--------------\n");
//    for(i = 0; i < ordem; i++) {
//      for(j = 0; j < ordem; j++) {
//         printf("%Lf ", auxMat[i][j]);
//       }
//       printf("\n");
//     }
//     printf("--------------\n");
//
    
    // impressao (saida do programa)
    printf("Quadrado da matriz #%d:\n", casos + 4);
    
    // impressao sem formato
    for(i = 0; i < ordem; i++) {
      for(j = 0; j < ordem; j++) {
         printf("%Lf ", finMat[i][j]);
       }
       printf("\n");
     }
  }
  return (0);
}

