#include <stdio.h>

typedef struct {
  int x;
  int y;
} Complexo;

int main() {
  Complexo n1, n2;

  n1.x = 5;
  n1.y = 8;

  n2.x = 1;
  n2.y = 2;

//  Soma
  Complexo soma;
  soma.x = n1.x + n2.x;
  soma.y = n1.y + n2.y;
  printf("Soma = (%d + %di)\n", soma.x, soma.y);

//  Subtração
  Complexo subt;
  subt.x = n1.x - n2.x;
  subt.y = n1.y - n2.y;
  printf("Subtração = (%d + %di)\n", subt.x, subt.y);
//
// Multiplicação
  Complexo mult;
  //  (a, bi) (c, di)
  //  ac adi, bci, bdi2
  //  (ac + bdi2) (adi, bci)
  //  (ac - bd) (ad, bc)i
  mult.y = (n1.x * n2.y) + (n1.y * n2.x);
  mult.x = (n1.x * n2.x - (n1.y * n2.y));
  printf("Multiplicação = (%d + %di)\n", mult.x, mult.y);

  return(0);
}

