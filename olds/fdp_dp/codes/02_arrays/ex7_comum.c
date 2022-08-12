#include <stdio.h>

int main(int argc, const char * argv[]) {

  // entradas
  int N;
//  1) Obter a quantidade de numeros da sequencia (N)
  printf("Informe a quantidade de numeros da seq:\n");
  //leitura do N (scanf)
  scanf("%d", &N);
  //TODO: Restrição - N precisa ser maior >= 1

  float sequencia[N]; //
  //leitura da sequencia
//  2) Obter os numeros da sequencia (floats) -> vetor
  int indice;
  printf("Informe os numeros da seq:\n");
  for(indice = 0; indice < N; indice++) {
    scanf("%f", &sequencia[indice]);
  }

  //  ------------------------------------------
  // Verificando se os dados foram lidos corretamente
  //  ------------------------------------------

  printf("------------------------\n");
  printf(" N = %d\n", N);
  printf(" Sequencia = {");
  for(indice = 0; indice < N; indice++) {
    printf("%.2f ", sequencia[indice]);
  }
  printf("}\n");
  printf("------------------------\n");

  //  ------------------------------------------
  //  A) descobrir quais sao os numeros unicos (tirando os repetidos)
  //  ------------------------------------------


//  primeira ocorrencia de um nro -> registrar/gravar/salvar
//  vetor  = [2, 8, 9, 2, 7, 5, 2, 9, 1, 0]
//  vetor2 = [2, 8, 9, 7, 5, 1, 0]

  float elementosUnicos[N];
  float valor;
  int qtde = 0;
  int encontrou = 0;

  for(indice = 0; indice < N; indice++) {
    valor = sequencia[indice];
    printf("Corrente = %f -> ", valor);
    // verificar se ele existe dentro do vetor de elementos unicos
    for(int i = 0; i < qtde; i++) {
      if(valor == elementosUnicos[i]) {
        encontrou = 1;
        break;
      }
    }
    if(encontrou == 1) {
      encontrou = 0;
      printf(" já existe\n");
    } else {
      printf(" não existe ainda\n");
      // se nao existe, adiciona o elemento
      elementosUnicos[qtde] = valor;
      qtde++;
    }
  }

  printf("Vetor unicos = [");
  for(indice = 0; indice < qtde; indice++) {
    printf("%.2f ", elementosUnicos[indice]);
  }
  printf("]\n");


  //  ------------------------------------------
  //  B) contar o nro de vezes que cada elemento unico aparece na sequencia
  //  ------------------------------------------

  int contagem[qtde]; // qtde = qtde de numeros unicos
  int i, j;

  // contagem = [0 0 0 0 0]
  for(i = 0; i < qtde; i++) {
    contagem[i] = 0;
  }

  //  elementosUnicos = [2, 8, 9, 7, 5, 1, 0]
  //  sequencia       = [2, 8, 9, 2, 7, 5, 2, 9, 1, 0]
  //  contagem        = [3, 1, 2, 1, 1, 1, 1]

  // percorrer (elementosUnicos)
  for(i = 0; i < qtde; i++) {
    // percorrer sequencia
    for(j = 0; j < N; j++) {
      if(elementosUnicos[i] == sequencia[j]) {
        contagem[i] = contagem[i] + 1;
      }
    }
  }

  //  ------------------------------------------
  // Imprimindo a saida
  //  ------------------------------------------

  printf("-------------------\n");
  for(i = 0; i < qtde; i++) {
    printf("%.2f ocorre %d vez(es)\n", elementosUnicos[i], contagem[i]);
  }
  printf("-------------------\n");

  //  ------------------------------------------
  //  ------------------------------------------

  return 0;
}
