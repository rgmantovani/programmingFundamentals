//  ex2167.c

#include <stdio.h>

int main() {
  
  int i, N;
  scanf("%d", &N);   // ler o numero de medidas

  // definir um vetor de tamanho N
  int medidas[N];
  
  int indice;
  indice = 0;
  
  int detectada = 0;
  
//  printf("_____________\n");
  
  // ler os rpms (segunda linha do programa)
  for(i = 0; i < N; i++){
    scanf("%d", &medidas[i]);
    
    if(i >= 1 && medidas[i] < medidas[i-1] && detectada == 0) {
      indice = i+1;
      detectada = 1;
//      printf("Menor = %d\n", medidas[i]);
//      printf("Indice = %d\n", indice);
    }
  }
  
//  printf("_____________\n");
  printf("%d\n", indice);
  
}

