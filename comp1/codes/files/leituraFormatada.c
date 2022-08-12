#include <stdio.h>

int main(int argc, const char * argv[])
{

  FILE *arquivo;

  arquivo  = fopen("./teste.txt", "r");

  // controle de erros para abertura de arquivos
  if(arquivo == NULL) {
    printf("Houve algum tipo de erro na manipulação de arquivos\n");
    return(1);
  }

  //
  int vetor[8];
  int i;

  // ler os dados do arquivo2 -> vetor
  for(i = 0; i < 8; i++) {
    fscanf(arquivo, "%d", &vetor[i]);
  }

  // imprimir os dados do vetor
  printf("Vetor = [ ");
  for(i = 0; i < 8; i++) {
    printf("%d ", vetor[i]);
  }
  printf("]\n\n");

  // 2 - arquivo precisa ser fechado
  fclose(arquivo);
  return 0;
}
