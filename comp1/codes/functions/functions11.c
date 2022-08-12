/*
Ex 11: Implemente uma calculadora que realize as seguintes operações,
 guiadas por um conjunto de opções exibidas em uma tela.
 
Ao ser digitada a opção, deve-se realizar a operação que foi determinada,
 mas deve-se obedecer às condições apresentadas a seguir:

 [a)] Ao ser digitada a opção, deve-se certificar que esta é válida, ou seja, se pertence ao intervalo de 0 a 12.
 
 [b)] Para soma, subtração, multiplicação e divisão, dois números serão digitados para a realização da operação. Deve-se verificar ainda que, na divisão, o denominador não poderá ser zero.
 
 [c)] No cálculo do seno, cosseno e tangente, o valor que será digitado estará em graus. No entanto, para a realização da operação, o ângulo deverá ser transformado para radiano. Deve-se certificar de que, no cálculo da tangente, o argumento da função não poderá ser múltiplo de 90.
 
 [d)] No cálculo da potenciação, o programa deverá tratar o caso de utilizar números negativos na base.
 
 [e)] Na opção fatorial, o cálculo só poderá ser realizado para números inteiros, maiores ou iguais a zero.

 [f)] No cálculo do logaritmo niperiano a na base dez, deve-se verificar se o argumento é um valor maior que zero.
 
 [g)] Depois do cálculo de cada função da calculadora, o programa emitirá uma mensagem perguntando se o usuário deseja realizar outro cálculo ou não. Em caso afirmativo, o menu principal será representado e a nova opção escolhida; senão o programa será encerado.
 
 Dica: usar as funções da biblioteca math.h do C (pow, sin, cos, atan, log, log10
 Para limpar o console em C, clrscr(); ou system(“cls”); ou system(“clear”);
*/

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MPI 3.14159265358979323846

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

/* adaptacao para limpar a tela
 Se estiver em Windows use: system("cls"),
 caso seja unix: system("clear")*/
void clearscr (void);

/* funcao para impressao do menu com as opcoes */
void printMenu(void);

/* funcoes que implementarao as operacoes com calculadora */
void adicao(void);
void subtracao(void);
void multiplicacao(void);
void divisao(void);
void seno(void);
void cosseno(void);
void tangente(void);
void modulo(void);
void potenciacao(void);
void exponencial(void);
void fatorial(void);
void logaritmo(void);
void logaritmo10(void);


/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */


int main(int argc, const char * argv[]) {
  
  char option = 'S';
  int op;
  
  do {
    printMenu();
    scanf("%d", &op);
    setbuf(stdin,NULL);
    system("cls"); //system("clear");
    
    switch (op) {
      case 0: adicao(); break;
      //case 1: subtracao(); break;
      //case 2: multiplicacao(); break;
      //case 3: divisao(); break;
      case 4: seno(); break;
      //case 5: cosseno(); break;
      //case 6: tangente(); break;
      //case 7: modulo(); break;
      //case 8: potenciacao(); break;
      //case 9: exponencial(); break;
      //case 10: fatorial(); break;
      //case 11: logaritmo(); break;
      //case 12: logaritmo10(); break;
      default: printf(" Opcao invalida!\n"); break;
    }
  
    printf("Deseja fazer alguma outra operção?\n S - Sim\n N - Nao\n");
    option = getchar();
    option = tolower(option);
    setbuf(stdin,NULL);
  
  } while(option != 'n');
  
  system("cls"); // system("clear");
  
  printf("***************************\n");
  printf(" Execucao finalizada!\n");
  printf("***************************\n");
 
  return 0;
}

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

void printMenu(void) {
  printf("***************************\n");
  printf("******  Calculadora  ******\n");
  printf("***************************\n");
  printf(" O que deseja fazer? \n");
  printf("***************************\n");
  printf("  0 - soma\n");
  printf("  1 - subtracao\n");
  printf("  2 - multiplicacao\n");
  printf("  3 - divisao\n");
  printf("  4 - seno\n");
  printf("  5 - cosseno\n");
  printf("  6 - tangente\n");
  printf("  7 - modulo\n");
  printf("  8 - potenciacao\n");
  printf("  9 - exponencial\n");
  printf(" 10 - fatorial\n");
  printf(" 11 - logaritmo niperiano\n");
  printf(" 12 - logaritmo na base dez\n");
  printf("***************************\n");
}

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

void adicao(void) {
  
  int a, b, res;
  
  printf("***************************\n");
  printf("******     Soma      ******\n");
  printf("***************************\n");
  printf(" Digite dois valores inteiros: \n");
  printf("***************************\n");
  scanf("%d %d", &a, &b);
  setbuf(stdin,NULL);
  res = a + b;
  printf("***************************\n");
  printf(" Resultado: %d\n", res);
  printf("***************************\n");

}

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

void seno(void) {
  
  int graus;
  double rads, res;
  
  printf("***************************\n");
  printf("******     Seno      ******\n");
  printf("***************************\n");
  printf(" Digite os graus: \n");
  printf("***************************\n");
  scanf("%d", &graus);
  setbuf(stdin,NULL);
 
  rads = ((double) graus * MPI)/180;
  res = sin(rads);
  
  printf("***************************\n");
  printf(" Resultado: %.4lf\n", res);
  printf("***************************\n");

}

/* ------------------------------------------------------------- */
/* ------------------------------------------------------------- */

