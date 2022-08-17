#include <stdio.h>

int main() {

  int multiplicador = 0, resultado;

  printf(“Tabuada de qual numero: ”);
  scanf(“%d”, &num);

  while(multiplicador <= 10) {
     resultado = num * multiplicador;
     printf(“%d”, resultado);
   }

   return(0);
}
