#include<stdio.h>

int main() {

  char tipo;
  scanf(“%c”, &tipo);

  if(tipo == ‘M’){
    printf(“Mucarela”);
  }
  else if(tipo == ‘C’){
    printf(“Calabresa”);
  }
  else {
    printf(“Bacon”);
  }
  return 0;
}
