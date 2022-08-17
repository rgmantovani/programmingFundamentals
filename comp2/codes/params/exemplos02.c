//#include <stdio.h>
//
////char*
////bool
//void alterar(int x, int y, int z) {
//  printf("Antes f(x): %d, %d, %d\n", x, y, z);
//  // mexer, alterar
//  x = x + 1;
//  y = y + 1;
//  z = z + 1;
//  printf("Depois f(x): %d, %d, %d\n", x, y, z);
//}
//
//void alterarRef(int* x, int* y, int* z) {
//  printf("Antes f(x): %d, %d, %d\n", *x, *y, *z);
//  // mexer, alterar
//  *x = *x + 15;
//  *y = *y + 15;
//  *z = *z + 15;
//  printf("Depois f(x): %d, %d, %d\n", *x, *y, *z);
//}
//
//void imprimeVetor(int v[], int n) {
//  printf("Vetor = [");
//  for(int i = 0; i < n; i++) {
//    printf("%d ", v[i]);
//  }
//  printf("]\n");
//}
//
//void alteraVetor(int v[], int n) {
//  for(int i = 0; i < n; i++) {
//    if((v[i] % 2) == 0) {
//      v[i] = 99;
//    }//
//  }
//}
//
////int main(int argc, const char * argv[]) {
//
//  int array[] = {0, 1, 2, 3, 4, 5};
//  imprimeVetor(array, 6);
//  alteraVetor(array, 6);
//  imprimeVetor(array, 6);
//
////  int a, b, c;
////  a = 1; b = 2; c = 3;
////  alterar(a, b, c);
////  printf("Depois Fval(x): %d, %d, %d\n", a, b, c);
////
////  alterarRef(&a, &b, &c);
////  printf("Depois FRef(x): %d, %d, %d\n", a, b, c);
//
//
//
//  // Ponteiro: variavel que guarda endereço de memória
////  int* ptr  - prt, que guarda endereço de um int
//  // float * ptr2 - prt2, guarda endereço de um float
////  char* <nome>
////  bool* <nome>
////  double*
////  * - conteudo
////  & - endereço
//
////  int a = 1;
////  int* ptr;
////
////  float b = 2.5;
////  float* ptr2;
////
////  ptr  = &a;
////  ptr2 = &b;
////
////  printf("A(1): %d\n", a);
////  printf("Ptr: %p\n", ptr);
////  printf("B(1): %f\n", b);
////  printf("Ptr2: %p\n", ptr2);
//
//  // altero o valor de A, sem usar A
//  // *prt (conteudo do endereço contido em ptr)
////  *ptr = *ptr + 10;
////  printf("A(2): %d\n", a);
////
////  *ptr2 = 0.9;
////  printf("B(2): %f\n", b);
////
//  return 0;
//}
//
//
//// Dentro da função usa * , *temp
//// Fora, chamada, usa &
//
////alterar(a, b, c);
////alterar(&a, &b, &c);
////
////void alterar(int* x, int* y, int* z) {
////  *x = *x + 10;
////}
//
////typedef struct{
////  int id;
////  char nome[50];
////} Aluno;
//
////Aluno a;
////a.id
////a.nome
////
////Aluno* p;
////p = &a;
////p->id
////p->nome
