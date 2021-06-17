#include<stdio.h>

int main() {

  int multiplicador, resultado, num;

  printf(“Tabuada de qual numero: ”);
  scanf(“%d”, &num);

  for(multiplicador=0; multiplicador <= 10; multiplicador++){
    resultado = multiplicador * num;
    printf(“%d”, resultado);
  }

  return(0);
}
