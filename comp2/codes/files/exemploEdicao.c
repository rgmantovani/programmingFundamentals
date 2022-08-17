/* ------------------------------------------- */
/* ------------------------------------------- */

#include <stdio.h>

/* ------------------------------------------- */
/* ------------------------------------------- */

void escreve(char *filename) {

  FILE *arq;
  char string[35]  = "Hello World: Rafael UTFPR!";
  
  arq = fopen(filename,"w");// Abre para escrita
  if(arq == NULL){
    printf("Erro ao abrir o arquivo!\n");
  }

  fprintf(arq,"%s",string);
  fclose(arq);
}

/* ------------------------------------------- */
/* ------------------------------------------- */

void altera(char *filename) {
  
  FILE *arq;
  arq = fopen(filename,"r+");// Abre para leitura/escrita
  if(arq == NULL){
    printf("Erro ao abrir o arquivo!\n");
  }//if
  
  /*
   
   fseeek = Reposiciona o indicador de posição do fluxo em função do deslocamento.
   
   Caso o fluxo tenha sido aberto em modo texto, existem dois tipos de chamadas possíveis:
   - O deslocamento deve ser zero e qualquer origem pode ser utilizada.
   - O deslocamento deve ser o valor retornado por uma chamada prévia a função ftell.
      A única origem permitida é SEEK_SET. */
  
  fseek(arq, 13, SEEK_SET);  // 13 caracteres a partir do inicio do arquivo
  char nome[35]  = "Mantov";
  
  fprintf(arq,"%s",nome);
  fclose(arq);
}

/* ------------------------------------------- */
/* Exemplo de edição de arquivo + modularização
 temos duas funcoes:
 - escreve: que cria o arquivo e grava informacoes nele
 - altera: abre o arquivo ja existente, e altera o conteudo
 ali existente */
/* ------------------------------------------- */

int main(int argc, const char * argv[]) {

  char *filename = "dados.txt";
 
  escreve(filename);
  altera(filename);
  
  return 0;
  
}

/* ------------------------------------------- */
/* ------------------------------------------- */


