//Ex04: Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S:
//S = 1 + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + \ldots + \frac{1}{N!}

#include <stdio.h>

/* **************************************************************** */
/* assinatura das funcoes necessarias para o exercicio              */
/* **************************************************************** */

int fatorial(int n);
float somatorio(int n);

/* **************************************************************** */
/* funcao principal                                                 */
/* **************************************************************** */

int main(int argc, const char * argv[]) {
  
  int N;
  
  /* obtem o valor N do usuário */
  printf("Digite o valor de N (inteiro > 0)\n");
  scanf("%d", &N);
  
  double res;
  
  /* calcula o valor da expressao chamando a funcao somatorio
   N é o valor do parametro */
  res = somatorio(N);
  
  printf("Resultado do somatorio é: %lf \n", res);
  
  return 0;
}

/* **************************************************************** */
/* funcao para calculo de fatorial, usada dentro da funcao do somatorio*/
/* **************************************************************** */

int fatorial(int n) {
  int prod = 1;
  for(int i = 1; i <= n; i++) {
    prod = prod * i;
  }
  return(prod);
}

/* **************************************************************** */
/* calcula a soma da sequencia S
S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/   
/****************************************************************** */

float somatorio(int n) {
  
  /* variaveis locais */
  int i;
  double term, sum = 1;
 
  for(i = 1; i <= n; i++) {
    
    /* casting para converter o resultado da divisao de dois inteiros
     em double */
    term = ((double) 1/fatorial(i));
    sum = sum + term;
  }
  return(sum);
}

/* **************************************************************** */
/* **************************************************************** */

