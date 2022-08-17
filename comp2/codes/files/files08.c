/* ------------------------------------------- */
/* ------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/* ------------------------------------------- */
/* Exercicio 08                               */
/* ------------------------------------------- */
/*
 
 Elabore um programa no qual o usuário informe
 o nome de um arquivo texto e uma palavra, e o
 programa informe o número de vezes que aquela
 palavra aparece.

 */

/* ------------------------------------------- */
/* ------------------------------------------- */

int main(int argc, const char * argv[]) {

  /* 1 - cria a variavel buffer (arquivo) para leitura/escrita */
  FILE *input;
  
  // Vamos ler o nome do arquivo de entrada pelo teclado do usuario
  char nome[50];
  
  printf("Digite o nome do primeiro arquivo: ");
  scanf("%s", &nome);
  setbuf(stdin, NULL);

  /* 2 - inicializa o buffer (arquivo) e realiza controle de erros
   abriremos o arquivo para leitura, se ele não existir uma mensagem
   de erro será impressa */
  input = fopen(nome, "r");
  if(input == NULL) {
    printf("Erro ao abrir arquivo: %s .\n Verifique o diretorio.\n", nome);
    return(EXIT_FAILURE);
  }

  /* 3 - logica do programa */
  
  // variavel auxiliar - palavra que queremos consultar no arquivo
  char query[50];
  
  /* vamos solicitar ao usuario que digita a palavra a ser consultada
   e armazenamos na variavel auxiliar (query) */
  printf("Digite a palavra a ser consultada: ");
  scanf("%s", &query);
  
  //outras variaveis auxiliares
  char word[1024];  // iremos usar para ler palavra por palavra do arquivo
  char lastChar;    // char para remover pontuações (, ; .)
  int cont = 0;     // contador para o numero de ocorrencias da palavra de consulta
  
  /* percorremos o arquivo todo lendo palabra por palavra,
   assumindo que uma palavra nao será maior que 1024 char */
  while (fscanf(input, " %1023s", word) == 1) {
  
    //puts(word);
    /* Nessa leitura pode acontecer de uma palavra vir com pontuação,
     por exemplo:
     dez,
     sim.
     */
    
    /* Então, acessamos o ultimo char da palavra e verificamos se é uma
     pontuação, se for, é removida substituindo o char por \0, que indica
     fim de palavra */
    lastChar = word[strlen(word)-1];
    if(lastChar == '.' || lastChar == ';' || lastChar == ',') {
      word[strlen(word)-1] = '\0';
    }
    //puts(word);  // debug
    
    /* com a palavra montada, comparamos com a palavra de consulta (query)
     strcmp = compara duas strings, se o retorno for igual a 0, elas são
     iguais
     Se forem iguais, incrementa o contador*/
    if(strcmp(query, word) == 0) {
      cont = cont + 1;
    }
  }
  
  /* mostramos então a saida do programa, que é o numero de ocorrencias
   da palavra (query) no arquivo consultado */
  printf("------------\n");
  printf("Ocorrencias de %s: %d\n", query, cont);
  printf("------------\n");
  
  /* 4 - fecha o buffer (arquivo) */
  fclose(input);
  return 0;
}

/* ------------------------------------------- */
/* ------------------------------------------- */

