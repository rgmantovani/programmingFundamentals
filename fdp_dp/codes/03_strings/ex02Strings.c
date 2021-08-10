# include <stdio.h>
# include <string.h>

int main(int arcg, char* argv[]) {

  char palavra[50];

//  ---------------------------------------
//  1. ler a palavra (vetor de caracteres)
  printf("Digite uma palavra: ");
  // fgets(<palavra>, <tamanho>, <buffer>)
  fgets(palavra, 50, stdin);

  //--------------------------------
  // Solução elegante - hack
  // Removendo o \n da leitura
  palavra[strcspn(palavra, "\n")] = '\0';
  //--------------------------------

  printf("----------------\n");
  printf("Palavra lida: %s\n", palavra);
  printf("----------------\n");

  //  ---------------------------------------

  // 2. Processamento

//  2. percorrer a palavra (vetor - for)
//  [B|I|G| |L|U|I|Z|\0| ...| ]
//  0 - 50 --> pega lixo, numero menor de posicoes preenchidas
//  qtde de posicoes preenchidas?
  // str len - STRing LENght = tamanho de string

  int tamanhoPalavra = strlen(palavra);
  printf("Tamanho da palavra = %d\n", tamanhoPalavra);

//  for(<inicial>, <final>, <incremento>) {
  int indice, qtdeVogais = 0;

  for(indice = 0; indice < tamanhoPalavra; indice++) {
    printf("P[%d] = %c", indice, palavra[indice]);

    char caracter = palavra[indice];
//    vogais = {a, e, i, o, u, A, E, I, O, U}
    if(caracter == 'a' || caracter == 'e' || caracter == 'i'
       || caracter == 'o' || caracter == 'u' || caracter == 'A'
       || caracter == 'E' || caracter == 'I' || caracter == 'O'
       || caracter == 'U') {

      qtdeVogais = qtdeVogais + 1;
      printf(" *** ");
    }
    printf("\n");
  }
 // Ja tem a qtde de vogais = qtdeVogais

  //  ---------------------------------------
  // 3. Saída: numero de vogais da palavra que lemos
  printf("----------------\n");
  printf("Quantidade de vogais = %d\n", qtdeVogais);
  printf("----------------\n");
  //  ---------------------------------------

  return 0;
}
