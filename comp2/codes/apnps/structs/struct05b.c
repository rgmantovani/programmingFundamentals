#include <stdio.h>

typedef struct {
  int x;
  int y;
} Complexo;

int main() {
  
  int a, b, c, d;
  printf("* Insira os coeficientes do primeiro número:\n");
  scanf("%d %d", &a, &b);
  printf("* Insira os coeficientes do segundo número:\n");
  scanf("%d %d", &c, &d);

  Complexo n1 = {a, b};
  Complexo n2 = {c, d};
  
  /* Soma */
  Complexo soma;
  soma.x = n1.x + n2.x;
  soma.y = n1.y + n2.y;
  printf("Soma = (%d + %di)\n", soma.x, soma.y);
  
  /* Subtração */
  Complexo subt;
  subt.x = n1.x - n2.x;
  subt.y = n1.y - n2.y;
  printf("Subtração = (%d + %di)\n", subt.x, subt.y);

  /* Multiplicacao */
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

