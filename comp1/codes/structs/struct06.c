//
//  struct06.c
//  Week4Structs

/* Crie uma estrutura para representar as coordenadas de um ponto no plano (posicoes X e Y).
 Em seguida, declare e leia do teclado dois pontos e exiba a distancia entre eles.
*/

#include <stdio.h>
#include <math.h>

typedef struct {
 float X;
 float Y;
} Ponto;

int main() {

 /* Sequencia */

 /* 1 - definir duas variaveis do novo tipos */
 Ponto p1, p2;

 /* 2 - ler os dados do teclado */
 printf("Insira os valores do ponto 1:\n");
 scanf("%f %f", &p1.X, &p1.Y);

 printf("Insira os valores do ponto 2:\n");
 scanf("%f %f", &p2.X, &p2.Y);


 /* Pausa para nosso debug
  verificar se a leitura esta ocoreendo corretamente */
 printf("----------\n");
 printf("P1: %f %f\n", p1.X, p1.Y);
 printf("P2: %f %f\n", p2.X, p2.Y);
 printf("----------\n");

 /* 3 - calcular a distancia entre essas vars
   distancia entre pontos (distancia euclidiana) */
 float dist;

 // dist = ((p1.X - p2.x)^2 + (p1.y - p2.y)^2) ^ (1/2)
 /* pow - potencia de numero
   pow (base, expoente)
    sqrt - raiz quadrado de um numero
   sqrt (valor) */

 dist = sqrt(pow((p1.X - p2.X),2)
             + pow((p1.Y - p2.Y),2));

 //  4 - imprimir o resultado */
 printf("Distancia = %f\n", dist);
 printf("--------------\n");

 return 0;
}
