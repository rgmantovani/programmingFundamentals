#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {

/* Crie um programa que leia os valores de venda (antigo e novo) de um produto. O programa deve calcular o percentual de aumento do produto. O programa encerra apenas quando o usuario informar a letra ‘N’ para a pergunta “Calcular o percentual de aumento do próximo produto?”. Caso o usuário resposta ‘S’ para essa pergunta, os valores de venda novo e antigo devem ser lidos para um novo produto.
  */

  // input - dois numeros (valores antigo e novo) de um produto -> preço -> float | double

  // Calculo : calcular o percentual de aumento de produto
  // formula

  // do - while
  // logica do programa
  // repetir - enqto resposta != N
  // qndo digitar S = finaliza

  // Solucao:
  // 1 - formula (1 iteracao)
  //     ler os dois numeros, e calcular o percentual
  // 2 - generalizar (rodar varias vezes)
  // 3 - juntar as duas coisas (1 e 2)

  float antigo, novo, aumento;
  char resposta = 'N';

  do {
    // logica
    printf("Informe os valores antigo e novo do produto:\n");
    scanf("%f", &antigo);
    fflush(stdin); // limpar buffer depois de ler numero
    scanf("%f", &novo);
    fflush(stdin); // limpar buffer depois de ler numero

    printf("Antigo = %.2f\n", antigo);
    printf("Novo = %.2f\n", novo);

    // Calculo : o percentual de aumento do preco do produto
      // (novo - antigo)/antigo
    aumento = (novo - antigo)/antigo;
    printf("Perc. de aumento = %.0f %%\n", 100*aumento);
    printf("-------------------------\n");

    printf("Calcular o percentual de aumento do próximo produto? - S para SIM, N para NÃO\n");
    scanf("%c", &resposta);
    fflush(stdin); // limpar buffer depois de ler letra
    printf("-------------------------\n");

//    printf("Lido = %c\n", resposta);
    // forçar o caracter a ser maiusculo
    resposta = toupper(resposta);
//    printf("Conv = %c\n", resposta);

  } while (resposta != 'N');

  printf("Finalizado\n");

  return 0;
}
