
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {

  // Ex10 - Leia um vetor com 15 nuumeros inteiros. Escreva os elementos do vetor eliminando elementos repetidos.
  
  // Input: 15 numeros inteiros
  // output: onde elementos unicos (Qtde?)
  
  //  Etapas de resolucao
  //  1. contagem para cada elemento
  //  2. qntos elementos repetidos/unicos a gente tem (qtde)
  //  3. imprimir só os elementos unicos, sem frequencia
  
  time_t t;
  srand((unsigned) time(&t));
  int N = 15;
  int i, k, vetor[N];
  
  // TODO: Modificar para entrada de dados via teclado (scanf)
  
  // vetor com 15 elementos, que podem ser valores entre 1 e 100
  printf("vetor = {");
  for(i = 0; i < N; i++) {
    vetor[i] = (rand() & 9) + 1; // 0 a 9 -> 1 a 10
    printf("%d ", vetor[i]);
  }
  printf("}\n");
  
  
  //1. contagem para cada elemento - 1 a 100
  int elemento, contagem[10];
 
  // vetor auxiliar de 100 posicoes
  // posicao = 0 (estado inical)
  for(i = 0; i < 10; i++) {
    contagem[i] = 0;
  }
  
  // 2. contagem dos elmentos
  for(elemento = 1; elemento <= 10; elemento ++) {
    for(k = 0; k < N; k++) {
      if(vetor[k] == elemento) {
          contagem[elemento-1]++;
      }
    }
  }
  
  printf("------------------------\n");
  for(elemento = 1; elemento <= 10; elemento ++) {
    printf("Contagem de %d = %d\n", elemento, contagem[elemento-1]);
  }
  printf("------------------------\n");
    
  // 3. qntos elementos repetidos/unicos a gente tem (qtde)
  // Exemplo:
  //  vetor  = {9 10 1 10 10 2 10 1 9 10 10 9 1 1 1 }
  //  output = {9 10 1 2}
  
  printf("Unicos = {");
  for(i = 0; i < 10; i++) {
    if(contagem[i] > 0) {
      printf("%d ", i+1);
    }
  }
  printf("}\n");
  
  return 0;
}

