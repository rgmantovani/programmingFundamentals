/* Exemplo 04: escrita de strings */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  
  FILE *arq;

  /* Se o arquivo nao existir ele vai ser criado */
  arq = fopen("testeEscritaString.txt", "w");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }
  
  /* logica do programa */
  char str[] = "Nao concordo nem discordo, muito pelo contrario.";
  
  /* imprime a string toda (console e arquivo) */
  printf("%s", str);
  
  int res;
  res = fputs(str, arq);
  if(res == EOF) {
    printf("Erro na escrita\n");
  }
  
  /* fechamento de arquivo */
  fclose(arq);
  
  return 0;
}

