#include <stdio.h>

int main(int argc, const char * argv[]) {

  int valor;

  printf("Informe um numero: ");
  scanf("%d", &valor);

  switch (valor) {
    case 1: printf("Domingo\n"); break;
    case 2: printf("Segunda-feira\n"); break;
    case 3: printf("terça-feira\n"); break;
    case 4: printf("Quarta-feira\n"); break;
    case 5: printf("Quinta-feira\n"); break;
    case 6: printf("Sexta-feira\n"); break;
    case 7: printf("Sábado\n"); break;

    default: // cai aqui se nenhuma das condicoes acima
//      forem satisfeitas
//      [-inf, 0], [8 , +Inf]
      // mensagem de erro
      printf("Erro: valor não manipulado pelo exercicio\n");
      break;
  }
  return 0;
}
