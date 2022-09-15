#include <stdio.h>

int main(int argc, char* argv[]) {
  int numero, maior, menor;
  printf("Digita um numero ai: ");
  scanf("%i", &numero);
  maior = numero;
  menor = numero;
  while (numero !=0) {
    if(numero > maior) {
      maior = numero;
    }
    if(numero < menor){
      menor = numero;
    }
    printf("Digita um numero ai: ");
    scanf("%i", &numero);
  }
  printf("Maior = %i\n", maior);
  printf("Menor = %i\n", menor);
  printf("\n\n\n\n\n");
  return 0;
}

//------------------------------------
//------------------------------------
