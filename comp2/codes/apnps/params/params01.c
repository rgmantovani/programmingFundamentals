#include <stdio.h>

/*
 
Escreva um programa que receba um numero inteiro representando a quantidade total
 de segundos e, usando passagem de parametros por referencia, converta a quantidade informada 
de segundos em horas, minutos e segundos. Imprima o resultado da conversao no 
formato HH:MM:SS. Utilize o seguinte prototipo:
 
 void converteHora(int total_segundos, int *hora, int *min, int *seg);
 */

/* -------------------------------------------------- */
/* -------------------------------------------------- */

/* prototipo da funcao (sem retorno)
 Parametros:
    - int total segundos (copia)
    - int *hora (referencia)
    - int *min (referencia)*/

void converteHora(int total_segundos, int *hora, int *min, int *seg){
  *hora = total_segundos/3600;
  *min  = (total_segundos % 3600)/60;
  *seg  = total_segundos%60;
}

/* -------------------------------------------------- */
/* -------------------------------------------------- */

int main(int argc, const char * argv[]) {

  int N;
  printf("Digite a quantidade de segundos a ser convertida:\n");
  scanf("%d", &N);
  
  int h, m, s;
  printf("-------------------\n");
  printf("Antes:\n");
  printf("%d:%d:%d\n", h, m, s);
  
  converteHora(N, &h, &m, &s);
  
  printf("-------------------\n");
  printf("Depois:\n");
  printf("%d:%d:%d\n", h, m, s);
  printf("-------------------\n");

  return 0;
}

/* -------------------------------------------------- */
/* -------------------------------------------------- */

