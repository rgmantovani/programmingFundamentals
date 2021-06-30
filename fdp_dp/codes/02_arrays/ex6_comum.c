#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Ex 06 - Tentando descobrir se um dado era viciado,
 um dono de cassino honesto o lançou N vezes.
 Dados os N resultados dos lançamentos, determinar o
 número de ocorrências de cada face.
 */

int main(int argc, const char * argv[]) {

  // input: N resultados do lançamento do dado
  // output: ocorrencia de cada face do dado

  time_t t;
  srand((unsigned) time(&t));

  //  * solucao 1: usuario entrar com os dados (N finito, fixo)
  int N;
//  int vetor[12] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 5, 6}; //1 a 6
//  int vetor[N];
  printf("Digite a quantidade de numero que deseja gerar: ");
  scanf("%d", &N);
  printf("Quantidade de amostras é: %d\n", N);

  // popular o vetor automaticamente
  int i, vetor[N];
  //  rand % 5 - 0 a 5 (+1) - 1 a 6
  for(i = 0; i < N; i++) {
    vetor[i] = (rand() % 6) + 1; // 1 a 6
  }

  //saida - verificar os dados lidos
  printf("Input = {");
  for(i = 0; i < N; i++) {
    printf("%d ", vetor[i]);
  }
  printf("}\n");

  /* Raciocionio: contar qntas vezes ocorrem
    cada um dos valores possiveis no dado
   / contagem 1, 2, 3, 4, 5, 6 */
  int contagem[N];
  for(i = 0; i < N; i++) {
    contagem[i] = 0;
  }

  float frequencia[N];
  // Verificação p 1
  // Percorrer o vetor
  //    para cada posicao vetor - comparar os valores (1 == vetor[i])
  //         soma

 // for()  // elementos {1, .. 6}, controla o elemento comparado (dado)
 //   for() // interno = percorre vetor, realiza a contagem
          // comparacao

  int k, elemento;

  for(elemento = 1; elemento <= 6; elemento ++) {
    for(k = 0; k < N; k++) {
      if(vetor[k] == elemento) {
//        printf("encontrado\n");
  //      contagem = 0(1) 1(2) 2(3) 3(4), 4(5), 5(6)
        contagem[elemento-1]++;
      }
    }
    // embutir aqui dentro calculo da frequencia
  }

  printf("------------------------\n");
  for(elemento = 1; elemento <= 6; elemento ++) {
    printf("Contagem de %d = %d\n", elemento, contagem[elemento-1]);
  }

  // frequencia
  //freq (real) = contagem (inteiro) / N (inteiro)
  printf("------------------------\n");
  for(elemento = 1; elemento <= 6; elemento ++) {
    frequencia[elemento-1] = (float) contagem[elemento-1]/N;
    printf("Freq. de %d = %.4f\n", elemento, frequencia[elemento-1]);
  }
  // outro for


  //  *    - while (-1), aceitando numeros (N diferente)
  //  * solucao 2: gerar numero aleatorios

  // 16.6 %

  return 0;
}
