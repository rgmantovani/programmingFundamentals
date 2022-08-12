/* Exemplo 01: abertura e fechamento de arquivos */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
  
  FILE *arq;

  /* testando abertura de arquivo */
  arq = fopen("teste3.txt", "r");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }
  
  /* descobrir a quantidade maxima de arquivos que pode ser
   aberta na máquina */
  printf("Numero maximo de arquivos: %d",  FOPEN_MAX);

  /* fechamento de arquivo */
  fclose(arq);
  
  return 0;
}

