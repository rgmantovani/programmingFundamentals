#include <stdio.h>

int main(int argc, const char * argv[]) {

 /*
  Calcule o resultado da serie:
  S = 1/1 + 3/2 + 5/3 + 7/4 + ... 99/50

  input  (entrada) = Nula
  output (saida)   = serie (S)

  Como fazer?
    - repetitivo, soma entre os valores
    - iteração: 50 termos (do-while)
      *** for  = sabe exatamente o numero de iteracoes (50)
      * do/while = vc nao sabe o numero de iteracoes

    - for (repeticoes) - qual a logica dos numeros de cada iteracao

      - denominador (em baixo) -> i (contador do for)
      (numerador/denominador) = termo

      - numerador (em cima)
        numerador = (2*i)-1

        1 -> 1 v
        2 -> 3 v
        3 -> 5 v
        4 -> 7 v
        ...
        50 -> 99 v

        (i + 2) x
        (2*i)-1 v

      - termo = numerador/denominador
              = ((2*i)-1)/i
  */

  int i;
  float numerador, denominador;
  float termo;
  float S; //soma, serie

  // inicia acumulador soma (0)
  S = 0;
  printf("-------------\n");
  // Garante 50 iterações
  for(i = 1; i <=50; i++) {

    // numerador = (2*i)-1
    numerador = (2*i)-1;
    // denominador = i
    denominador = i;

    termo = (numerador/denominador);
    // incrementar a soma
    S = S + termo;
    printf("Numerador = %.f\n", numerador);
    printf("Denominador = %.f\n", denominador);
    printf("Termo = %f\n", termo);
    printf("S = %f\n", S);
  }
  printf("-------------\n");

  printf("Resultado = %.5f\n", S);
  return 0;
}
