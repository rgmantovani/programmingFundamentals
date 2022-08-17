#include <stdio.h>
 
// -------------------------------------
// -------------------------------------

//int imprimeMatriz(int n, int m, int mat[n][m])
//void imprimirVetor(int v[], int n) {
void imprimirVetor(int n, int v[n]) {
  printf("vetor = [");
  for(int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("]\n");
}

// -------------------------------------
// -------------------------------------

void alteraVetor(int n, int v[n]){
 /*
  - Leia outro valor inteiro A, e coloque na primeira posicao do vetor
   
   ***: deslocar os valores no vetor
   
   Input = [1, 2, 3, 4, 5, 6, 7, 8, 9, ###]
   Output= [A, 1, 2, 3, 4, 5, 6, 7, 8, 9]
   */
  int valor;
  printf("Digite um valor (inteiro):");
  scanf("%d", &valor);

  int pos;
  for(pos = 8; pos >=0 ; pos--) {
    printf("%d <- %d \n", pos+1, pos);
    v[pos+1] = v[pos];
  }
  
  // sobrescreve primeiro elemento
  v[0] = valor;
}

// -------------------------------------
// -------------------------------------

int main(int argc, const char * argv[]) {

  /*
   - Crie um vetor de 10 elementos (inteiros)
   - Leia 9 valores inteiros e armazene em V
     ultima posicao, não recebe nada
   */
  int vet[10];
  int n = 10;
  for(int i = 0; i < 9; i++) {
    vet[i] = i+1;
  }
  
  imprimirVetor(n, vet);
  alteraVetor(n, vet);
  imprimirVetor(n, vet);

  return 0;
}
