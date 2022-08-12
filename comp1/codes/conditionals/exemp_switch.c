#include<stdio.h>

int main() {

  char tipo;
  scanf(“%c”, &tipo);

  switch(tipo) {
      case ‘M’:
        printf(“Mucarela”);
        break;
      case ‘C’:
        printf(“Calabresa”);
        break;
      case ‘B’:
        printf(“Bacon”);
        break;
      default:
        printf(“opção invalida”);
   }
   return 0;
}
