#include <stdio.h>
#include <string.h>   // biblioteca para manipulacao de strings (nomes, texto, etc)

/* Definicao do tipo Horario */
typedef struct {
  int hora;
  int minutos;
  int segundos;
} Horario;

/* Definicao de um tipo Compromisso
percebam que ele usa o tipo Horario para definir horario (tempo) */
typedef struct {
  char localidade[100];
  char texto[100];
  Horario horario;
} Compromisso;

/* funcao principal */
int main() {
  
  // define variavel do tipo compromisso
  Compromisso c;

  // atribuir os valores aos espacos da variavel
  c.horario.hora = 13;
  c.horario.minutos = 50;
  c.horario.segundos = 0;

  /* strcpy = string copy
   funcao para atribuir textos a variaveis (strings)
  */
  strcpy(c.localidade, "UTFPR");
  strcpy(c.texto, "Aula de Comp 2");
  
  // imprimir os dados do compromisso
  printf("* Compromisso: %s\n", c.texto);
  printf("* Localidade: %s\n", c.localidade);
  printf("* Horário: %d:%d:%d\n", c.horario.hora,
           c.horario.minutos, c.horario.segundos);
  
  return(0);
}
