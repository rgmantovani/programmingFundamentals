#include <stdio.h>

//Ex 1179
int main(int argc, const char * argv[]) {
  
  int par[5], impar[5];    //vetores
  int tamPar, tamImpar;    //capacidade dos vetores
  int i, j, k;             //contadores
  int valor;               //valores a serem lidos
  
  // iniciar variaveis
  tamPar = 0;
  tamImpar = 0;
  
  // ler 15 valores inteiros
  for(i = 0; i< 15; i++) {
   
    scanf("%d", &valor);
//    printf("Valor = %d\n", valor);
    
    
    if(valor % 2 == 0) {
      par[tamPar] = valor;
      tamPar++;
    } else {
      impar[tamImpar] = valor;
      tamImpar++;
    }

    if(tamImpar == 5) {
      for(k = 0; k < tamImpar; k++) {
        printf("impar[%d] = %d\n", k, impar[k]);
      }
      tamImpar = 0;
    }

    if(tamPar == 5) {
      for(j = 0; j < tamPar; j++) {
        printf("par[%d] = %d\n", j, par[j]);
      }
      tamPar = 0;
    }
  }

  //depois de ler os 15 valores, imprimir o que sobrou
  for(k = 0; k < tamImpar; k++) {
    printf("impar[%d] = %d\n", k, impar[k]);
  }

  for(j = 0; j < tamPar; j++) {
    printf("par[%d] = %d\n", j, par[j]);
  }

  return 0;
}

