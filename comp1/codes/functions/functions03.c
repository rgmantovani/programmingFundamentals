#include <stdio.h>

/*
Crie uma funcao que recebe o valor de um inteiro positivo N, calcule e retorne o fatorial desse numero.
*/

//funcao(int N)
  // calcular o fatorial de N
//  return (fatorial de N)

//1! = 1
//2! = 2 * 1 = 2
//3! = 3 * 2 * 1 = 6
//4! = 4 * 3 * 2 * 1 = 24
//5! = 5 * 4 * 3 * 2 * 1 = 120
//..
//N! = N * (N-1) * (N-2) * (N-3) ... * 1

int fatorial(int N) {
  int fat, i;
  fat = 1;
  for(i = 1; i <= N; i++) {
    printf("- termo: %d\n", i);
    fat = fat * i;
  }
  return(fat);
}

// ----------------------------------------------
// ----------------------------------------------

int main(int argc, const char * argv[]) {
  
  /* 1 - entrada dos dados */
  int numero, resultadoFatorial;
  printf("Meu amigo, digite um numero inteiro, positivo: ");
  scanf("%d", &numero);
  
  /* 2 - verificacao de inteiro / positivo */
  if(numero < 1) {
    printf("- Numero digitado invalido!\n Digite um numero inteiro positivo\n");
  } else {
  
    /* 3 - logica do programa */
    //    ...
    resultadoFatorial = fatorial(numero);
    printf("Fatorial = %d\n", resultadoFatorial);
  }
  
  return 0;

}
  

