/* ------------------------------------------- */
/* ------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ------------------------------------------- */
/* Exercicio 04                                */
/* ------------------------------------------- */
/*
 
 Escreva um programa que leia do usuário os
 nomes de dois arquivos texto. Crie um terceiro
 arquivo texto com o conteúdo dos dois primeiros
 juntos (o conteúdo do primeiro seguido do conteúdo
 dosegundo).

 */

/* ------------------------------------------- */
/* ------------------------------------------- */

int main(int argc, const char * argv[]) {

  /* 1 - cria as variaveis ddos buffers (arquivos) para leitura/escrita */
  FILE *input1, *input2, *output;
  
  // Vamos ler os dois nomes dos arquivos de entrada pelo teclado do usuario
  char nome1[50], nome2[50];
  
  printf("Digite o nome do primeiro arquivo: ");
  scanf("%s", &nome1);
  setbuf(stdin, NULL);
  printf("Digite o nome do segundo arquivo: ");
  scanf("%s", &nome2);
  setbuf(stdin, NULL);

  /* 2 - inicializa o buffer (arquivo) e realiza controle de erros */
  
  // abrimos o arquivo 1 para leitura (ele deve existir)
  input1 = fopen(nome1, "r");
  if(input1 == NULL) {
    printf("Erro ao abrir arquivo: %s .\n Verifique o diretorio.\n", nome1);
    return(EXIT_FAILURE);
  }

  // abrimos o arquivo 2 para leitura (ele deve existir)
  input2 = fopen(nome2, "r");
  if(input2 == NULL) {
    printf("Erro ao abrir arquivo: %s .\n Verifique o diretorio.\n", nome2);
    return(EXIT_FAILURE);
  }

  // abrimos o arquivo 3 para escrita (ele nao precisa existir, pois é criado de qualquer forma)
  output = fopen("ex04.txt", "w");
  if(output == NULL) {
    printf("Erro ao abrir arquivo para escrita.\n Verifique o diretorio.\n");
    return(EXIT_FAILURE);
  }

  /* 3 - logica do programa */
  
  char ch;
  
  // percorrer todo o arquivo 1 e escrever os caracteres no arquivo 3
 
  while(true) {
    ch = fgetc(input1);
    if(ch == EOF) {
      break;
    }
    fputc(ch, output);
  }
  
  fputs("\n",output);
  
  // percorrer todo o arquivo 2 e escrever os caracteres no arquivo 3
  while(true) {
    ch = fgetc(input2);
    if(ch == EOF) {
      break;
    }
    fputc(ch, output);
  }
  
  /* 4 - fecha todos os buffers (arquivos) */
  fclose(input1);
  fclose(input2);
  fclose(output);
  
  return 0;
}

/* ------------------------------------------- */
/* ------------------------------------------- */

