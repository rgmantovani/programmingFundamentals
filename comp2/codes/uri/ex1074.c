#include <stdio.h>

int main() {

 int N;
 int num;
 int i;

 //quantidade de numeros a serem lidos
 scanf("%d", &N);

 for(i = 0; i < N; i++){
   scanf("%d", &num);


   if(num == 0) {
     printf("NULL\n");

   //numeros pares
   } else if(num % 2 == 0) {
       if(num > 0) {
           printf("EVEN POSITIVE\n");
       } else {
           printf("EVEN NEGATIVE\n");
       }
   //numeros impares
   } else {
       if(num > 0) {
           printf("ODD POSITIVE\n");
       } else {
           printf("ODD NEGATIVE\n");
       }
   }
 }

 return(0);
}
