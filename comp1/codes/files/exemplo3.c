/* Exemplo 03: leitura de caracteres */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {

  FILE *arq;

  /* Se o arquivo nao existir ele vai ser criado */
  arq = fopen("testeEscrita.txt", "r");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }

  /* logica do programa */
  char c;

  while (1) {
    /*
     fgetc = file get char = pegar um caractere do arquivo
     fgetc(<arquivo>)
     */
    
    c = fgetc(arq);
   
    /* feof = end of file?
     retorna true se for o caracter corrente for o de fim de arquivo,
     falso em caso contrário */
    
    if(feof(arq)) {
      break;
    }
    printf("%c", c);
  }

  /* fechamento de arquivo */
  fclose(arq);

  return 0;
}

