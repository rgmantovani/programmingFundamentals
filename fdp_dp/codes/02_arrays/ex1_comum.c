#include<stdio.h>

int main(){

  // declaração de variáveis
  int i;      //contador para controle do laço (for)
  int num[5]; // vetor com 5 posicoes para inteiros

  // laço de repetição para acessar as posicoes do vetor
  for(i = 0; i <= 4; i++) {
    printf(“%d ”, num[i]);  //imprime o valor da vez
  }

  return 0;
}
