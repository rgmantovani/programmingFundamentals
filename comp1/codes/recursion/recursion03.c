/* Usando recursividade, calcule a soma de todos os valores de um vetor de inteiros */

#include <stdio.h>

/* ------------------------------------------------ */
/* ------------------------------------------------ */

int somaVetor(int v[], int n) {
  
  /* condicao base */
  if(n == 0) {
    return (0);
  } else {
    /* condicao recursiva */
    return (somaVetor(v, n - 1) + v[n - 1]);
  }
}

/* ------------------------------------------------ */
/* ------------------------------------------------ */

int main(int argc, const char * argv[]){
  
  int n, i;
  
  printf("Informe o tamanho do vetor:");
  scanf("%d", &n);
  
  int vet[n];
  
  printf("Digite os valores do vetor: ");
  for(i = 0; i < n; i++) {
    scanf("%d", &vet[i]);
  }
 
  printf("Vetor = [ ");
  for(i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }
  printf("]\n");

  int res = somaVetor(vet, n);
  printf("Res = %d\n", res);

  return 0;
}

/* ------------------------------------------------ */
/* ------------------------------------------------ */

