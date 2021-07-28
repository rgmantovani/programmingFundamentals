#include <stdio.h>

int main(int argc, const char * argv[]) {

//  1) criar vetor de 10 posicoes
//  <tipo> <nome> [capacidade]
  int idades[10];

// 2) Popular o vetor, obter dados (scanf)
//      - a) usuario     - digite 10 valores
//  [idades1, idades2, ..., idades10]
//  for -> percurso do vetor
//  for(<condicao inicial>, <condicao parada>, <incremento/decremento>
//  [0 ... 9] - 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10x
//  contador++ <-> contador = contador + 1
  int contador;
  int entradaLida;

  printf("Meu amigo, digite alguns numeros: \n");
  for(contador = 0 ; contador < 10 ; contador++) {

    //idades[contador] <- valor
    scanf("%d", &entradaLida);
    // verificar se o valor é positivo ou negativo
    while(entradaLida < 0) {
      printf("Entrada negativa, digite um inteiro positivo:");
      scanf("%d", &entradaLida);
    }
    // vem aqui (entrada >= 0)
    idades[contador] = entradaLida;
  }

//  3) o que eu ja tenho? tenho um vetor com 10 valores validos
  // Visualizar a entrada digitada pelo usuario (debug)
  printf("Vetor = [");
  for(contador = 0 ; contador < 10 ; contador++) {
    printf("%d ", idades[contador]);
  }
  printf("]\n");

  //4) criar um contador (inteiro) = 0
  int idadesMaiores35 = 0;

  /*
   5) Verificar: se cada idade é maior que 35
       - percorrer o vetor, posição por posição
       - se o valor dentro da posição corrente for > 35
         - aumenta em 1 o contador (idadesMaiores35)
       - senão, não faz nada
   */
  // percorrer o vetor (acessar cada posicao, uma por vez)
  for(contador = 0; contador < 10; contador++) {
    // iteração - laço - posicão acessivel pela variavel contador
//    contador = 0 -> idades[contador] -> idades[0] -> idades1
//    contador = 1 -> idades[contador] -> idades[1] -> idades2
//    contador = 2 -> idades[contador] -> idades[2] -> idades3
//   ...
//    contador = 9 -> idades[contador] -> idades[9] -> idades10

    //    - se o valor dentro da posição corrente for > 35
    //        - aumenta em 1 o contador

    if(idades[contador] >= 35) {
//      printf("cai aqui dentro e vou contar mais um \n");
      idadesMaiores35 = idadesMaiores35 + 1;
//      idadesMaiores35++;
    }
  }

//  6) idadesMaiores35 = quantidade de idades acima de 35
//    - impressão da saida (printf)
  printf("---------------------\n");
  printf("Idades >= 35 = %d\n", idadesMaiores35);
  printf("---------------------\n");

  return 0;
}
