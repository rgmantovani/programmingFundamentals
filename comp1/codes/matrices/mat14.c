//
//  mat14.c
//  Week3

/* faca um programa que calcula a soma de duas matrizes */
 
 #include <stdio.h>
int main() {

  int N1, M1;
  printf("Insira a ordem da matriz1 [L x C]:\n");
  scanf("%d", &N1);
  scanf("%d", &M1);

  int N2, M2;
  printf("Insira a ordem da matriz1 [L x C]:\n");
  scanf("%d", &N2);
  scanf("%d", &M2);

  //verifica a ordem das matrizes
  if(N1 != N2 || M1 != M2) {
    printf(" - A soma nao pode ser realizada pois as matrizes sao de dimensoes diferentes\n");
  } else {
    
    //estao ok, podemos somar
    int matriz1[N1][M1];
    int matriz2[N2][M2];
    int i, j;

    printf("Populando matriz 1:\n");
    for(i = 0; i < N1; i++) {
      for(j = 0; j < M1; j++) {
        scanf("%d", &matriz1[i][j]);
      }
    }
    
    printf("Imprimindo matriz 1:\n");
    printf("-------------\n");
    for(i = 0; i < N1; i++) {
      for(j = 0; j < M1; j++) {
        printf("%d ", matriz1[i][j]);
      }
      printf("\n");
    }
    printf("-------------\n");
    
    
    printf("Populando matriz 2:\n");
    for(i = 0; i < N2; i++) {
      for(j = 0; j < M2; j++) {
        scanf("%d", &matriz2[i][j]);
      }
    }
    
    printf("Imprimindo matriz 2:\n");
    printf("-------------\n");
    for(i = 0; i < N2; i++) {
      for(j = 0; j < M2; j++) {
        printf("%d ", matriz2[i][j]);
      }
      printf("\n");
    }
    printf("-------------\n");
    
    // somar as duas matrizes C = A + B
    int soma[N1][M1];
    for(i = 0; i < N1; i++) {
      for(j = 0; j < M1; j++) {
        soma[i][j] = matriz1[i][j] + matriz2[i][j];
      }
    }
    
    printf("Imprimindo Soma\n");
    printf("-------------\n");
    for(i = 0; i < N2; i++) {
      for(j = 0; j < M2; j++) {
        printf("%d ", soma[i][j]);
      }
      printf("\n");
    }
    printf("-------------\n");
    
  }
  
  return (0);
}

