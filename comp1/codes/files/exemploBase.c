#include <stdio.h>

int main(int argc, const char * argv[])
{
  // definição de variaveis para acesso de arqs
  FILE *arquivo, *arquivo2;
   // *arquivo3;
  // 1 - arquivo precisa ser aberto (?)
  // r - read (leitura)
  // w - write (escrita)
  arquivo  = fopen("./testeRRR.txt", "r");
  // se o modo de abertura for escrita (w), e o arquivo
  // nao existir, um arquivo com o nome definido será criado
  arquivo2 = fopen("./teste2.txt", "w");

  // controle de erros para abertura de arquivos
  if(arquivo == NULL || arquivo2 == NULL) {
    printf("Houve algum tipo de erro na manipulação de arquivos\n");
    return(1);
  }

  // printf("Deu tudo certo\n");
  // printf("Qtde máxima de arquivos: %d\n\n", FOPEN_MAX);

  // 2 - arquivo precisa ser fechado
  fclose(arquivo);
  // fclose(arquivo2);
  return 0;
}
