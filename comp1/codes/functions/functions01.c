/*
Ex01 Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e uma letra.
 Se a letra for A, o procedimento calcula a média aritmética das notas do aluno, se for P,
média ponderada (pesos: 5, 3 e 2) e se for S, a soma das notas. O valor calculado também deve ser
 retornado e impresso na função main.
 */
 
/* **************************************************************** */
/* bibliotecas carregas e assinatua das funcoes/procedimentos que
 definimos para resolver o exercicio                                */
/* **************************************************************** */

#include <stdio.h>
#include <ctype.h>

float mediaNotas(float v1, float v2, float v3, char let);

/* **************************************************************** */
/* **************************************************************** */

int main(int argc, const char * argv[]) {

  float v1, v2, v3;
  char letter;
  float res;
  
  /* obtendo as tres notas do aluno via scanf*/
  printf("Digite as tres notas do aluno:\n");
  scanf("%f %f %f", &v1, &v2, &v3);
  setbuf(stdin,NULL);
  
  /* obtendo a opcao a ser computada */
  printf("Digite a opcao de media:\n");
  scanf("%c", &letter);
  setbuf(stdin,NULL);
  
  /* converte as letras todas para minusculas
   (controle do programa)*/
  letter = tolower(letter);
   
  /* chamada da funcao externa e impressao dos valores
   retornados */
  printf("***************************\n");
  res = mediaNotas(v1, v2, v3, letter);
  printf("Resultado: %.2f\n", res);
  printf("***************************\n");
  return 0;
}

/* **************************************************************** */
/* **************************************************************** */

/* Se a letra for A, o procedimento calcula a média aritmética das notas
 do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for S, a
 soma das notas. O valor calculado também deve ser retornado e impresso
 na função main.
*/

float mediaNotas(float v1, float v2, float v3, char let){
  
  float media = 0;

  switch (let) {
    case 'a':
      printf(" - Media Aritmetica:\n");
      media = (v1 + v2 + v3)/3;
      break;
    case 'p':
      printf(" - Media Ponderada:\n");
      media = ((v1*5) + (v2*3) + (v3*2))/10;
      break;
    case 's':
      printf(" - Soma das notas:\n");
      media = v1 + v2 + v3;
      break;
    default: printf("Opcao invalida para operacao das notas\n");
      break;
  }
  
  return(media);
}

/* **************************************************************** */
/* **************************************************************** */

