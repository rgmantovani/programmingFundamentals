#include<stdio.h>

int main() {

  char tipo;
  scanf(“%c”, &tipo);

  if(tipo == ‘M’){
    printf(“Mucarela”);
  }
  if(tipo == ‘C’){
    printf(“Calabresa”);
  }
  if(tipo == ‘B’){
    printf(“Bacon”);
  }
  return 0;
}
