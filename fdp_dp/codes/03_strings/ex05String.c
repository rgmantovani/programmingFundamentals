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

  printf("Depois do Do-While %s\n", sigla);
  sigla[strcspn(sigla, "\n")] = '\0';

  //  ---------------------------------------
  //  2. converter a sigla p maiusculo
  for(int i = 0; i < strlen(sigla); i++) {
    sigla[i] = toupper(sigla[i]);
  }

  // str cmp = STRing CoMPare = comparar duas strings
//  strcmp(str1, str2) = 0

//  if -elses aninhados
  if(strcmp(sigla, "PR") == 0 ) {
    printf("Estado = Paraná\n");
  } else if(strcmp(sigla, "SC") == 0) {
    printf("Estado = Santa Catarina\n");
  } else if(strcmp(sigla, "RS") == 0) {
    printf("Estado = Rio Grande do Sul\n");
  } else {
    printf("Erroouuuuuuuuuu. Não é um estado do Sul.\n");
  }
  printf("----------------\n");
  //  ---------------------------------------

  return 0;
}
