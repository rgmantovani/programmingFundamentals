# include <stdio.h>
# include <string.h>
# include <ctype.h>  // tolower / toupper

int main(int arcg, char* argv[]) {

  char sigla[4];

  //  ---------------------------------------
//  1. ler a sigla (vetor de caracteres)
  do {
    printf("Digite uma sigla de um estado da região SUL: ");
    fgets(sigla, 4, stdin);
    setbuf(stdin, NULL); // limpa buffer
    printf("----------------\n");
    printf("Sigla lida: %s\n", sigla);
  } while(sigla[2]!='\n');

//  printf("Depois do Do-While %s\n", sigla);
  sigla[strcspn(sigla, "\n")] = '\0';

  //  ---------------------------------------
  //  2. converter a sigla p maiusculo
  for(int i = 0; i < strlen(sigla); i++) {
    sigla[i] = toupper(sigla[i]);
  }

  // str cmp = STRing CoMPare = comparar duas strings
//  strcmp(str1, str2) = 0

  char nomeEstado[18];

//  if -elses aninhados
  if(strcmp(sigla, "PR") == 0 ) {
    strcpy(nomeEstado, "Paraná");
  } else if(strcmp(sigla, "SC") == 0) {
    strcpy(nomeEstado, "Santa Catarina");
  } else if(strcmp(sigla, "RS") == 0) {
    strcpy(nomeEstado, "Rio Grande do Sul");
  } else {
    printf("Erroouuuuuuuuuu. Não é um estado do Sul.\n");
  }

  printf("Estado = %s.\n", nomeEstado);
  printf("----------------\n");
  //  ---------------------------------------

  return 0;
}
