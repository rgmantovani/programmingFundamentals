/* Exemplo 02: escrita de caracteres */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  
  FILE *arq;

  /* Se o arquivo nao existir ele vai ser criado */
  arq = fopen("testeEscrita.txt", "w");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }
  
  /* logica do programa */
  char str[] = "Nosso exemplo de escrita no arquivo texto";
  
  int i;
  for(i = 0; i < strlen(str); i++) {
    /* fputc(<catactere>, <arquivo>)
     fputc = file put caracter = colocar caracter no arquivo */
     fputc(str[i], arq);
    printf("%c", str[i]);
  }
  
  /* fechamento de arquivo */
  fclose(arq);
  
  return 0;
}

