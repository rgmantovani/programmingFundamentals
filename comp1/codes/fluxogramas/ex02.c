#include <stdio.h>

int main(int argc, char* argv[]) {
  int idade, cont, soma;
  float media;
  cont = 0;
  soma = 0;
  media = 0;
  printf("Maluco, digita uma idade ai mermão:");
  scanf("%i", &idade);
  while(idade != 0) {
    soma = soma + idade;
    cont = cont + 1;
    printf("Maluco, digita uma idade ai mermão:");
    scanf("%i", &idade);
  }
  if(cont == 0) {
    printf("Media = 0\n");
  } else {
    media = (float) soma/cont;
    printf("Media = %f", media);
  }
  printf("\n\n\n\n\n\n");
  return 0;
}










//------------------------------------
//------------------------------------
