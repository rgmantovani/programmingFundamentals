#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

  FILE *arquivo;
  FILE *output;

  // arquivo  = fopen("./teste.txt", "r");
  arquivo  = fopen("./leitura.txt", "r");
  output   = fopen("./leituraModificada.txt", "w");

  // controle de erros para abertura de arquivos
  if(arquivo == NULL || output == NULL) {
    printf("Houve algum tipo de erro na manipulação de arquivos\n");
    return(1);
  }

  /* logica */
  // feof - file end of file (true/false)
  // true - percorreu o arquivo
  // false - tem informacao p ser lida/manipulada

  char ch;
  int linhas = 0;
  // while - não sabemos o tamanho da informação
  // dentro do arquivo (zero ou mais chars)
  while(!feof(arquivo)) {
    // fazer alguma coisa (leitura)
    // fgetc - file get character (pegar um caracter do arquivo)
    ch = fgetc(arquivo);
    printf("%c", ch);

    // toda vez que ler uma vogal, substituir por *
    // gravar no arquivo de saida
    if(ch == 'a' || ch == 'e' || ch == 'i' ||
      ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' ||
      ch == 'O' || ch == 'U') {
      fputc('*', output);
    } else {
      fputc(ch, output);
    }

    // contagem de linhas (?)
    if(ch == '\n') {
      linhas++;
    }
  }

  printf("\n\n");
  printf("* Quantidade de linhas: %d\n\n", linhas);

  // 2 - arquivo precisa ser fechado
  fclose(arquivo);
  fclose(output);
  return 0;
}
