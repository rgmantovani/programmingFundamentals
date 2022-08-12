#include <stdio.h>

int main() {

  int n;

  for(;;){

     printf(“Digite um numero inteiro: “);
     scanf(“%d”, &n);

     if (n == 7) {
       printf(“Saindo do loop...\n”);
       break; //força a saída do loop
     }
     printf(“Numero: %d\n”, n);

   }
   printf(“Fim de programa”);
   return(0);
}
