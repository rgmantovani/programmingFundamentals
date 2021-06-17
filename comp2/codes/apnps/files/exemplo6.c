/* Exemplo 06: leitura/escrita formatada */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  
  FILE *arq;

  /* Se o arquivo nao existir ele vai ser criado */
  /*  r+ = leitura + escrita */
  arq = fopen("fibonacci.txt", "r+");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }
  
  /* logica do programa */
  int i;
  int vet[8];
  for(i = 0; i < 8; i++) {
    fscanf(arq, "%d", &vet[i]);
  }
  
  printf("Dados lidos do arquivo:\n");
  for(i = 0; i < 8; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
  
  /* soma do vetor */
  int soma = 0;
  for(i = 0; i < 8; i++) {
    soma = soma + vet[i];
  }
  
  fprintf(arq, "\nSoma: %d\n", soma);
  
  /* fechamento de arquivo */
  fclose(arq);
  
  return 0;
}

