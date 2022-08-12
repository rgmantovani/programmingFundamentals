#include <stdio.h>

int main(int argc, const char * argv[]) {

  int idades[10];
  int contador;
  int entradaLida;

  printf("Meu amigo, digite alguns numeros: \n");
  for(contador = 0 ; contador < 10 ; contador++) {
    scanf("%d", &entradaLida);
    while(entradaLida < 0) {
      printf("Entrada negativa, digite um inteiro positivo:");
      scanf("%d", &entradaLida);
    }
    idades[contador] = entradaLida;
  }

  int idadesMaiores35 = 0;
  for(contador = 0; contador < 10; contador++) {
    if(idades[contador] >= 35) {
      idadesMaiores35 = idadesMaiores35 + 1;
    }
  }
  printf("Idades >= 35 = %d\n", idadesMaiores35);
  return 0;
}
