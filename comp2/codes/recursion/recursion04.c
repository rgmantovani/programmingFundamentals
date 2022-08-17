/*
 Enunciado: Um problema típico em ciência da computação consiste em converter
um número da sua forma decimal para binária. Crie um algoritmo recursivo
para resolver esse problema.
Solução trivial: x=0 quando o número inteiro já foi convertido para binário
Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito
(0 ou 1) dado o sucesso da divisão.
 */

#include <stdio.h>

/* ----------------------------------------------- */
/* ----------------------------------------------- */

/*
  Função que converte e exibe num numero decimal em binario
  \param numero numero a ser convertido
 */
void converteBinario(int numero){
  
  /* variavel local */
  int resto;
  
  /* caso base */
  if(numero <= 1){ // caso base
    printf("%d", numero);
  } else {
    /* caso recursivo */
    resto = numero % 2;
    converteBinario(numero/2);
    printf("%d",resto);
  }
}

/* ----------------------------------------------- */
/* ----------------------------------------------- */

int main(int argc, const char * argv[]){

  //Declaração de variáveis
  int numero;

  //Solicita o numero a ser convertido
  printf("Digite o numero a ser exibido em binário: ");
  scanf("%d", &numero);

  //Chama a função converteBinario para testar
  converteBinario(numero);
  printf("\n");

  return 0;
}//main

/* ----------------------------------------------- */
/* ----------------------------------------------- */

