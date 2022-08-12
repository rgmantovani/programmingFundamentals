#include <stdio.h>

void alterar(int x, int  y, int  z) {

  //primiro print
  printf("valores  recebidos...  %d  %d  %d\n",  x,  y,  z);
  x++;  //incrementa  valor  de  x
  y++;  //incrementa  valor  de  y
  z++;  //incrementa  valor  de  z

  //segundo print
  printf("valores  alterados...  %d  %d  %d\n",  x,  y,  z);
}

int main() {

  int a = 1;
  int *ptr; //endereço de memoria onde o c está

  /*

   &  - endereço (posição de memoria - hexadecima)
   *  - conteúdo (valor armazenado - consultar/alterar)

   */
  
  ptr = &a; // guarda o endereço de a

  printf("Endereço do ptr: %p\n", ptr); // endereço fisico onde está o valor
  printf("Contudo do ptr: %d\n", *ptr); //contudo armazenado naquela posicao

  *ptr = 10;

  printf("Contudo do ptr: %d\n", *ptr); //contudo armazenado naquela posicao
  printf("Contudo do a: %d\n", a); //contudo armazenado naquela posicao

  return 0;
}

