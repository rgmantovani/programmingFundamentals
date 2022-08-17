/*
 Enunciado: Crie uma função que retorne x elevado a y
 através de operação de multiplicação. A função recebe x e y por parâmetro
*/

#include <stdio.h>

/*
* Função que calcula x elevado a y utilizando recursao
* \param base base da potencia
* \param expoente expoente da potencia
* \return o resultado da potenciação
*/
int calculaPotencia(int base, int expoente){
  /* caso base */
  if(expoente == 0 ){
    return 1;
  } else {
  /* caso recursivo */
    return base * calculaPotencia(base, expoente - 1);
  }
}

/* ----------------------------------------- */
/* ----------------------------------------- */

int main(int argc, const char * argv[]){

  /* Declaração de variáveis */
  int potencia, a, b;
  
  /* leitura dos valores do user */
  printf("Digite os numeros que deseja operar: \n");
  scanf("%d %d", &a, &b);

  /* Chama a função calculaPotencia */
  potencia = calculaPotencia(a, b);

  /* Exibe o resultado */
  printf("A potencia é %i\n", potencia);

 return 0;
}

/* ----------------------------------------- */
/* ----------------------------------------- */

