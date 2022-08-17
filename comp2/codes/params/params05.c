/*

 {5} Quadrados mágicos 3 x 3 consistem em uma matriz que a soma das colunas
 e das duas diagonais principais é 15. Por exemplo:

 6 & 1 & 8
 7 & 5 & 3
 2 & 9 & 4

Faça:

 [a)] uma função para colocar os elementos dentro da matriz;
 [b)] uma função que verificar se a matriz é um quadrado mágico;
 [c)] uma função que imprima a matriz.

 */

#include <stdio.h>
#include <stdbool.h>

void preencheMatriz(int n, int mat[n][n]);
void imprimeMatriz( int n, int mat[n][n]);
bool quadradoMagico(int n, int mat[n][n]);  // true/false

/* ----------------------------------------- */
/* ----------------------------------------- */

int main(int argc, const char * argv[]) {

  int ordem = 3;
  int matriz[3][3];

  preencheMatriz(ordem, matriz);
  imprimeMatriz(ordem, matriz);
  
  printf("--------------------\n Saida:");
  if(quadradoMagico(ordem, matriz)){
    printf("É um quadrado mágico\n!");
  } else {
    printf("Não é\n!");
  }
  printf("--------------------\n");
}

/* ----------------------------------------- */
/* ----------------------------------------- */

void preencheMatriz(int n, int mat[n][n]){

  int i, j;
  printf("Digite os valores da matriz:\n");
  for(i = 0; i < n; i++) { // linhas
    for(j = 0; j < n ; j++) {  //colunas
      scanf("%d", &mat[i][j]);
    }
  }
}

/* ----------------------------------------- */
/* ----------------------------------------- */

bool quadradoMagico(int n, int mat[n][n]) {
  
  int i, j;
  int somaPrincipal  = 0;
  int somaSecundaria = 0;
  
  // 1) soma das diagonais da matriz
  for(i = 0; i < n; i++) { // linhas
    for(j = 0; j < n; j++) { // colunas
      
      // 00, 11, 22 -> (i == j)  -> soma diag principal
      if(i == j) {
        somaPrincipal = somaPrincipal + mat[i][j];
      }
      
      // 02, 11, 20 -> (i+j == 2) -> soma diag secund
      if((i+j) == 2) {
        somaSecundaria = somaSecundaria + mat[i][j];
      }
    }
  }
  
  printf("Soma Diag Princ: %d\n", somaPrincipal);
  printf("Soma Diag Secun: %d\n", somaSecundaria);
  
  // 2) soma das colunas
  int somaColunas[3] = {0, 0, 0};
  for(j = 0; j < n; j++) {
    for(i = 0; i < n; i++) {
      somaColunas[j] = somaColunas[j] + mat[i][j];
    }
  }
  
  printf("Soma Coluna 1: %d\n", somaColunas[0]);
  printf("Soma Coluna 2: %d\n", somaColunas[1]);
  printf("Soma Coluna 3: %d\n", somaColunas[2]);
 
  // 3) verificar se as somas sao iguais a 15
//  se diagPrin != 15 -> falso
//  se diagSec != 15 -> falso
//  se somaColunas[1|2|3] != 15 -> falso
//  senao -> verdadeiro
//
  if(somaPrincipal != 15 || somaSecundaria != 15 ||
     somaColunas[0] != 15 || somaColunas[1] != 15
     || somaColunas[2] != 15) {
    return false;
  } else {
    return true;
  }
}

/* ----------------------------------------- */
/* ----------------------------------------- */

void imprimeMatriz(int n, int mat[n][n]) {
  int i, j;
  printf("-------------------------\n");
  for(i = 0; i < n; i++) { // linhas
    for(j = 0; j < n ; j++) { // colunas
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("-------------------------\n");
}

/* ----------------------------------------- */
/* ----------------------------------------- */

