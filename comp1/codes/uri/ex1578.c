#include <stdio.h>
#include <math.h>

int main (int argc, const char * argv[]) {

  /* so funcionou no URI quando mudei de int para unsigned short */
  unsigned short casos, qtsCaso = 4, ordem;
  unsigned short linha, coluna, k;
  unsigned short qtsDigitosAtual;
  
  long double maior;

  scanf("%hu", &casos);
  
  while (casos--)
  {
    scanf("%hu", &ordem);

    long double matriz[ordem][ordem];

    // Preenche a matriz e já faz o quadrado do termo;
    for (linha = 0; linha < ordem; linha++) {
      for (coluna = 0; coluna < ordem; coluna++) {
        scanf("%Lf", &matriz[linha][coluna]);
        matriz[linha][coluna] = matriz[linha][coluna] * matriz[linha][coluna];
      }
    }

    printf("Quadrado da matriz #%hu:\n", qtsCaso);
    for (linha = 0; linha < ordem; linha++) {
      for (coluna = 0; coluna < ordem; coluna++) {

        // identificar maior valor da coluna
        maior = 0;
        for (k = 0; k < ordem; k++) {
          if (matriz[k][coluna] > maior) {
            maior = matriz[k][coluna];
          }
        }

        // log na base 10 nos da a quantidade de digitos de um número;
        qtsDigitosAtual = ((floor(log10(maior))) + 1);
        if (coluna != ordem && coluna != 0)
          printf(" ");
        printf("%*.Lf", qtsDigitosAtual, matriz[linha][coluna]);
      }
      printf("\n");
    }
    qtsCaso++;
    
    // Quebra de linha condicional para não imprimir caso seja a última matriz;
    if (casos != 0)
      printf("\n");
  }

}

