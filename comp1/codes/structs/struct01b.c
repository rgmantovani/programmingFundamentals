#include<stdio.h>

/* definicao do tipo Data */
/* Poderia ser definido dentro ou fora da main */
typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

/* Funcao principal */
int main() {
  
  Data d = {19, 9 1987};

  printf("* Data: %d/%d/%d\n",
    d.dia, d.mes, d.ano);

  return(0);
}
