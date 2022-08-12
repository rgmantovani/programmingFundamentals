
#include <stdio.h>
#define STRTAM 50

int main(int argc, const char * argv[]) {

  char texto1[STRTAM], texto2[STRTAM], texto3[STRTAM], texto4[STRTAM];
  
  printf("Digite texto 1: ");
  scanf("%s", texto1);
  setbuf(stdin, NULL);
  
  printf("Digite texto 2: ");
  fgets(texto2, sizeof(texto2), stdin);
  setbuf(stdin, NULL);
  
  printf("Digite texto 3: ");
  scanf("%s", texto3);
  setbuf(stdin, NULL);
  
  printf("Digite texto 4: ");
  fgets(texto4, sizeof(texto4), stdin);
  setbuf(stdin, NULL);

  printf("Texto 1: %s\n", texto1);
  printf("Texto 2: %s\n", texto2);
  printf("Texto 3: %s\n", texto3);
  printf("Texto 4: %s\n", texto4);
  
  return 0;
}

