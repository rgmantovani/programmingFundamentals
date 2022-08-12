#include <stdio.h>

/* ------------------------------------------------ */
/* ------------------------------------------------ */

int X(int a) {
  if(a <= 0) {
    return 0;
  } else {
    return (a + X(a-1));
  }
}

/* ------------------------------------------------
Função iterativa que calcula a soma de todos os numeros de n até 1
\param numero numero do qual se quer a soma
\return a soma de todos os valores de numero até 1
------------------------------------------------ */

int calculaSomatorio(int numero){
    int soma = 0;
    for (int  i = numero; i > 0; i--) {
      soma += i;
    }// for
    return soma;
}//converteBinario

/* ------------------------------------------------ */
/* ------------------------------------------------ */

int main(int argc, const char * argv[]){

 
  //Declaração de variáveis
  int soma;
  int numero;

  //Solicita o numero a ser calculado o somatorio
  printf("Digite um numero: ");
  scanf("%d", &numero);

  /* chama a funcao recursiva */
  soma = X(numero);
  printf("Res (recursivo) = %d\n", soma);

  /* chama a função calculaSomatorio (iterativa) */
  soma = calculaSomatorio(numero);
  printf("O somatório de 1 até %d é %d\n", numero, soma);

  return 0;
}

/* ------------------------------------------------ */
/* ------------------------------------------------ */

