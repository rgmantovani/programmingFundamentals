#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

  /* 01 - Definimos a quantidade de arquivos usadas pelo programa */
  FILE *arq;

  /* 02 - Abrir os buffers (arquivos) para escrita/leitura
   e checar se houve erro ao criar/abrir cada um dos arquivos
   ...
   fopen(<nome do arquivo>, <modo de abertura>)
   
   Modos mais comuns:
   - "r" : leitura de arquivo texto, o arquivo deve existir
   - "w" : escrita de arquivo texto, criar arquivo se nao existir. Se ja
   existir, o anterior é apagado.
   - "a": escrita, os dados serão adicionados ao fim do arquivo (append)
   */

  arq = fopen("teste3.txt", "w");
 
  if(arq == NULL) {
    printf("Erro ao abrir arquivo\n");
    exit(1);
  } else {
    printf("Arquivo aberto com sucesso\n");
  }

  /* 03 - AQUI: logica do programa
   ...
   ...
   ...
   */

  /* 04 - Fechar todos os arquivos abertos */
  fclose(arq);

  return 0;
}

