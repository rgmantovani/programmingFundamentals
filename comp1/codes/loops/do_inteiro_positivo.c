#include<stdio.h>

int main() {

  int num;

  do{

     printf(“Forneca um inteiro positivo: ”);
     scanf(“%d”, &num);

     if(num < 0) {
       printf(“Valor invalido. Tente novamente.”);
     }

  } while(num < 0);

  return(0);
}
