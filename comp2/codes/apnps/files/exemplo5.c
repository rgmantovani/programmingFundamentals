/* Exemplo 05: leitura de strings */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  
  FILE *arq;

  /* Se o arquivo nao existir ele vai ser criado */
  arq = fopen("testeEscritaString.txt", "r");
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }
  
  /* logica do programa */
  char str[100];
  
  fgets(str, 100, arq);
  printf("%s", str);
  
  /* fechamento de arquivo */
  fclose(arq);
  
  return 0;
}

