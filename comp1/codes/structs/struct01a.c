#include<stdio.h>

/* define tipo Horario */
/* pode ser feito tanto fora como dentro da main */
typedef struct {
  int hora;
  int minutos;
  int segundos;
}Horario;

/* funcao principal */
int main() {

  Horario var;
  var.hora     = 14;
  var.minutos  = 30;
  var.segundos = 0;

  /* tambem funciona */
  /* Horario var = {14, 30, 0}; */

  printf("* Horario: %d:%d:%d\n", var.hora, 
    var.minutos, var.segundos);

  return(0);
}
 
