#include <stdio.h>

int main(int argc, const char * argv[]) {

/*  Dados um numero de linhas L e um numero de colunas C, ambos fornecidos pelo usuario, exiba um retângulo formado por L linhas, cada uma delas contendo C asteriscos, conforme exemplificado a seguir, para L = 4, C = 5:
  */

  /*
   entrada: dois numeros inteiros (L, C)
    - L: nro de linhas
    - C: nro de colunas
   * restricoes:
    - só posso receber inteiros positivos

   saida: exibir um retandulo composto por * (L x C)
   */

  // 1 passo (receber as entradas)
  // 2 passo - gerar o retangulo
  // 3 passo - mostrar a saida (retangulo)

  // 1 - input
  printf("Informe valores inteiros positivos para L e C:");
  int L, C;
  scanf("%d %d", &L, &C);
  printf("L = %d C = %d\n", L, C);

  // verificar restricoes
  if(L <= 0 || C <= 0) {
//    - - -> erro
//    - + -> erro
//    + i -> erro
//    + + -> v
    printf("Warning - o programa só funciona com números inteiros positivos\n.");
  } else {
    // passo 2 - gerar o retangulo (linha - coluna)
    // laço 1 - linha
    // laço 2 - coluna
    int i, j;
    for(i = 0; i < L; i++) {
  //    printf("\n");
      for(j = 0; j < C; j++) {
        printf("*");
      }
      printf("\n");
    }
  } // else

  return 0;
}
