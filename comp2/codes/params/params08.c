/*
 8) Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:

 a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas;
*/

#include <stdio.h>
#define tamanho 50

typedef struct{
    char nome[tamanho];
    char genero[tamanho];
    int integrantes;
    int rk;
} Banda;

/* -------------------------------------------------- */
/* -------------------------------------------------- */

 /*
 [b)] Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, exiba todas as informações das bandas/estruturas;
*/

void imprimeVetor(Banda vetor[], int n);  //ok
void preencheVetor(Banda vetor[], int n); //ok

/* -------------------------------------------------- */
/* -------------------------------------------------- */
/*

 [c)] Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
*/

void consultaRk(Banda vetor[], int n, int posicao); //ok

/* -------------------------------------------------- */
/* -------------------------------------------------- */
/*
 [d)] Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking;
 */

void consultaTipoMusica(Banda vetor[], int n, char* tipoMusica);

/* -------------------------------------------------- */
/* -------------------------------------------------- */
/*
 [e)] Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
*/

void consultaBanda(Banda vetor[], int n, char* banda);

/* -------------------------------------------------- */
/* -------------------------------------------------- */
/*
 [f)] Agora junte tudo e crie um menu com as opções de preencher as estruturas e todas as opções das questões passadas.
*/

void menu(void);

//---------------------------------------------
// funcao principal
//---------------------------------------------

 int main(int argc, const char * argv[]) {

   int N = 2;
   int consulta;
   Banda vetor[N];

   /* chamamos uma funçao para preencher o vetor (usando ponteiros) */
   preencheVetor(vetor, N);

   /* imprime os valores armazenados no vetor */
   imprimeVetor(vetor, N);

   printf("Digite posicao entre [1,5] para consultar no Ranking:\n");
   scanf("%d", &consulta);
   consultaRk(&vetor[0], N, consulta);

   printf("Fim de execucao\n");
   return 0;
}

/* -------------------------------------------------- */
/* --------------------------------------------------
 Funcao de entrada dos dados. Recebe:
    *vetor: ponteiro para vetor de banda
    n: tamanho do vetor
 */

void preencheVetor(Banda vetor[], int n){

  printf("---------------------------\n");
  printf(" *** Leitura dos dados *** \n");
  printf("---------------------------\n");

  for(int i = 0; i < n; i++) {

    printf("[Rank #%d]\n", i+1);
    printf("Nome da banda: ");
    setbuf(stdin, NULL);                      // limpa o buffer
    fgets(vetor[i].nome, tamanho, stdin);     // le a string

    printf("Genero da banda: ");
    setbuf(stdin, NULL);                      // limpa o buffer
    fgets(vetor[i].genero, tamanho, stdin);   // le a string

    printf("Nro de integrantes: ");
    scanf("%d", &vetor[i].integrantes);
    vetor[i].rk = i+1;
    printf("\n");
  }
  printf("---------------------------\n");
}

//---------------------------------------------
// Funcao de impressao dos dados. Recebe:
//- *vetor: ponteiro para vetor de banda
//- n: tamanho do vetor
//---------------------------------------------

void imprimeVetor(Banda vetor[], int n) {

  printf("---------------------------\n");
  printf("*** Impressao dos dados ***\n");
  printf("---------------------------\n");

  for(int i = 0; i < n; i++) {
    printf("Ranking: %d\n", vetor[i].rk);
    printf("Nome da banda:%s", vetor[i].nome);
    printf("Genero da banda: %s", vetor[i].genero);
    printf("Nro de integrantes: %d\n\n", vetor[i].integrantes);
  }
  printf("---------------------------\n");
}

/* ---------------------------------------------
/ Funcao de consulta. Parametros:
    - *vetor: ponteiro para vetor de banda
    - n: tamanho do vetor
    - posicao: posicao do ranking para ser impressa
*/

void consultaRk(Banda vetor[], int n, int posicao) {

  posicao = posicao - 1;

  if(posicao < 0 || posicao > (n-1)) {
    printf(" - Posicao invalida! \n");
  } else {
    printf(" *** Valores encontrados *** \n");
    printf("Ranking: %d\n", vetor[posicao].rk);
    printf("Nome da banda: %s", vetor[posicao].nome);
    printf("Genero da banda: %s", vetor[posicao].genero);
    printf("Nro de integrantes: %d\n\n", vetor[posicao].integrantes);
  }
  printf("---------------------------\n");
}

/* -------------------------------------------------- */
/* -------------------------------------------------- */



/* -------------------------------------------------- */
/* -------------------------------------------------- */

void menu(void) {
  /*
   r - consultar o ranking
   b - consultar uma banda
   i - imprime vetor
   p - preenche vetor

   */
}

/* -------------------------------------------------- */
/* -------------------------------------------------- */
