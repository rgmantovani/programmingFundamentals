#include <stdio.h>

int main(int argc, char* argv[]) {
  int idade, cont, mais18;
  idade = 0;
  cont = 0;
  mais18 = 0;
  while(cont != 10) {
    printf("Digite a idade: ");
    scanf("%i", &idade); //LER (idade)
    if(idade >=18) {
      mais18 = mais18 + 1;
    }
    cont = cont + 1;
  }
  printf("Mais18 = %i\n", mais18); //IMPRIME(mais18)
  printf("\n\n\n\n\n");
  return 0;
}

//------------------------------------
//------------------------------------
