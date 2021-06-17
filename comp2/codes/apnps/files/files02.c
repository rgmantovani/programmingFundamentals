/* ------------------------------------------- */
/* ------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ------------------------------------------- */
/* Exercicio 02                                */
/* ------------------------------------------- */
/*
 
 Crie um programa que armazene em um arquivo,
 informações sobre 4 alunos. Receba as informações das
 pessoas por meio do teclado. Cada pessoa deve ter nome,
 número da matrícula, curso e media final. O arquivo
 deverá se chamar “Alunos.txt”

 */

/* ------------------------------------------- */
/* Struct para armazenar a informação de um
 aluno */
/* ------------------------------------------- */

typedef struct{
  char  nome[50];
  char  matricula[10];
  char  curso[50];
  float media;
} Aluno;

/* ------------------------------------------- */
/* ------------------------------------------- */

int main(int argc, const char * argv[]) {

  /* 1 - cria a variavel de arquivo texto para leitura */
  FILE *input;
  
  /* 2 - inicializa o buffer (arquivo) e realiza controle de erros */
  input = fopen("alunos.txt", "w");
  if(input == NULL) {
    printf("Erro ao abrir arquivo para escrita.\n Verifique o diretorio.\n");
    return(EXIT_FAILURE);
  }

  /* 3 - logica do programa */
  int TAM = 2;
  Aluno vet[TAM];
  int i;
  
  printf("-----------------------------\n");
  for(i = 0; i < TAM; i++){
    printf("Dados do Aluno %d:\n", i+1);
    printf("Nome: ");
    scanf("%s", &vet[i].nome);
    setbuf(stdin, NULL);
    printf("Matricula: ");
    scanf("%s", &vet[i].matricula);
    setbuf(stdin, NULL);
    printf("Curso: ");
    scanf("%s", &vet[i].curso);
    setbuf(stdin, NULL);
    printf("Media: ");
    scanf("%f", &vet[i].media);
    setbuf(stdin, NULL);
    printf("-----------------------------\n");
  }

  // debug
//  printf("-----------------------------\n");
//  printf("Dados lidos:\n");
//  printf("-----------------------------\n");
//
//  for(i = 0; i < TAM; i++){
//    printf("Dados do Aluno %d:\n", (i+1));
//    printf("Nome: %s \n", vet[i].nome);
//    printf("Matricula: %s \n", vet[i].matricula);
//    printf("Curso: %s \n", vet[i].curso);
//    printf("Media: %.2f \n", vet[i].media);
//    printf("-----------------------------\n");
//  }
//
  
  /* Gravando os dados no arquivo */
  
  for(i = 0; i < TAM; i++){
    fprintf(input, "%s,", vet[i].nome);
    fprintf(input, "%s,", vet[i].matricula);
    fprintf(input, "%s,", vet[i].curso);
    fprintf(input, "%.f", vet[i].media);
    fprintf(input, "\n");
  }
 
  
  /* 4 - fecha o buffer (arquivo) */
  fclose(input);
  return 0;
}

/* ------------------------------------------- */
/* ------------------------------------------- */

