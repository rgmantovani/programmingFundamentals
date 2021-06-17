/*
 Crie uma função que retorne x * y através de operação de some.
 A função recebe x e y por parâmetro
 */

#include <stdio.h>

/* ----------------------------------------- */
/* ----------------------------------------- */
/*
 * Função que multiplica x por y utilizando recursao
 * \param x multiplicando
 * \param y multiplicador
 * \return o resultado da multiplicao
 */
int multiplica(int x, int y){
  
  /* caso base */
  if(y <= 1){
    return x;
  } else {
  /* caso recursivo */
    return x + multiplica(x, y-1);
  }
}

/* ----------------------------------------- */
/* ----------------------------------------- */

int main(){

  int res, a, b;

  /* leitura dos valores do user */
  printf("Digite os numeros que deseja multiplicar: \n");
  scanf("%d %d", &a, &b);
  
  /* chama a funcao que faz a multiplicacao */
  res = multiplica(a, b);

  /* Exibe o resultado */
  printf("A multiplicacao é %i\n", res);

  return 0;
}

/* ----------------------------------------- */
/* ----------------------------------------- */

