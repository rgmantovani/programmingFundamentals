#include <stdio.h>

int main(int argc, char* argv[]) {

  int valor;
  printf("Tabuada de que número maluco: ");
  scanf("%d", &valor);
  //cont = 0
  int cont;
  cont = 0;
  //enquanto (contador < 11):
  while (cont < 11) {
    //  Imprimir (contador * 7)
    printf("%i ", cont*valor);
    //  contador = contador + 1
    cont = cont + 1;
  }
  printf("\n");
  return 0;
}

//------------------------------------
//------------------------------------
