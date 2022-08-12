/* ------------------------------------------------ */
/* ------------------------------------------------ */

#include <stdio.h>

/**
 * Função que exibe o enésimo número da sequencia de Fibonacci
 * \param termo termo a ser exibido
 * \return o valor do enésimo termo
 */
int calculaFibonacci(int termo){
  /* caso base */
  if(termo == 1){
      return 0;
    /* caso base */
    } else if( termo == 2 ){
      return 1;
    } else {
      /* caso recursivo */
      return calculaFibonacci(termo - 1) +  calculaFibonacci(termo - 2);
    }
}

/* ------------------------------------------------ */
/* ------------------------------------------------ */

int main(int argc, const char * argv[]) {

  /* Declaração de variáveis */
  int quantidade;
  int valor;

  /* Solicita a quantidade de valores a serem exibidos */
  printf("Digite a quantidade de termos a serem exibidos: ");
  scanf("%d", &quantidade);

  printf("\nFibonacci: ");
  /* Repete a chamada da função para mostrar todos os termos */
  for (int termo = 1; termo <= quantidade; termo++) {
    valor = calculaFibonacci(termo);
    printf("%i ", valor);
  }
  printf("\n");

  return 0;
}

/* ------------------------------------------------ */
/* ------------------------------------------------ */

