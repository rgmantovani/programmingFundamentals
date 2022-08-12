#include <stdio.h>

int main(int argc, const char * argv[]) {

 /*
  Faca um programa para calcular o fatorial de um numero inteiro (n!). Lembrando que:
  n! = n × (n − 1) × (n − 2) × . . . × 1

  input (entrada): numero digitado pelo usuário (scanf)
  output (saida) : fatorial daquele numero (printf)
  restricoes:
    - não aceita numeros negativos
      [0, +Inf)
    - só aceita numeros inteiros (int)

  formula:
  n! = n × (n − 1) × (n − 2) × . . . × 1

  0! = 1 (definição)
  1! = 1                 -> 1
  2! = 2 * 1             -> 2
  3! = 3 * 2 * 1         -> 6
  4! = 4 * 3 * 2 * 1     -> 24
  5! = 5 * 4 * 3 * 2 * 1 -> 120
  ...

  N = N * N-1 * N-2 * N-3 ... * 1

  while / for / do while
  */
//  for (condicao inicial, condicao parada, incremento/decremento)

  // passo 1 - Leitura do nro (input)
  printf("Cara, digita um numero ai: ");
  long int N;
  scanf("%d", &N);
  printf("Numero digitado = %d\n", N);


  // paso 1 - B - verificar as entradas do programa (restricoes)
  if(N < 0) {
    printf("Warning: não é possível calcular o fatorial de um número negativo. Informe um inteiro positivo.\n");
  } else {

  //  2. Calcular o fatorial
  //  Preciso:
  //  variavel acumuladora (auxiliar) -> fatorial
    long int fatorial = 1;
  //  laço de repetição
    long int i;
    // N = N * N-1 * N-2 * N-3 ... * 1
    // for(condicao inicial, criterio parada, inc/dec)
    printf("--------------\n");
    for(i = N; i != 0; i--) {
      printf("Numero it = %ld \n", i);
      fatorial = fatorial * i;
      // soma = soma + i;
      printf("Fatorial it = %ld\n", fatorial);
    }
    printf("--------------\n");
    printf("Fatorial final: %ld\n", fatorial);
  }

  return 0;
}
