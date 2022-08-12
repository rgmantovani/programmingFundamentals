#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

  FILE *arquivo;
  arquivo  = fopen("./escrita.txt", "w");
  // controle de erros para abertura de arquivos
  if(arquivo == NULL) {
    printf("Houve algum tipo de erro na manipulação de arquivos\n");
    return(1);
  }

  char str[] = "Texto a ser gravado no arquivo.";

  /* logica do programa */
  // strlen - string length (tamanho de string)
  for(int i = 0; i < strlen(str); i++) {
    //gravar o caracter (fputc)
    printf("%c",str[i]);
    fputc(str[i], arquivo);
  }

  // 2 - arquivo precisa ser fechado
  fclose(arquivo);
  return 0;
}
