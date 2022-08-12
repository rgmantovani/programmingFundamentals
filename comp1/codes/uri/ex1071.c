#include <stdio.h>

int main(){

  int X, Y, temp, soma, i;
  scanf("%d", &X);
  scanf("%d", &Y);

  //troca valores
  if(X > Y){
    temp = X;
    X = Y;
    Y = temp;
  }

  soma = 0;
  for(i = X+1; i < Y; i++) {
    if(i%2 != 0){
      soma = soma + i;
    }
  }

  printf("%d\n", soma);
  return(0);
}
