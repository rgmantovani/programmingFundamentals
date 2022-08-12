//
//  ex2310.c

#include <stdio.h>

int main() {
  
  int N;  // 1 <= N <= 100
  
  scanf("%d", &N);
  
  //  definindo os vetores depois de ler N
  int vS[N], vB[N], vA[N];
  int vS1[N], vB1[N], vA1[N];
  
  int i;
  char nome[100];   //ler o nome, mas nem usa na real
  
  // Leitura dos dados
  for(i = 0; i < N; i ++){
    scanf("%s\n", nome);                          // p ler string
    scanf("%d %d %d", &vS[i], &vB[i], &vA[i]);
    scanf("%d %d %d", &vS1[i], &vB1[i], &vA1[i]);
  }
 
//  printf(" - dados:\n");
//  for(i = 0; i < N; i ++){
//     printf("%d %d %d\n", vS[i], vB[i], vA[i]);
//     printf("%d %d %d\n", vS1[i], vB1[i], vA1[i]);
//  }
//  
  // Calcular a porcentagem dos saques
  float totalSaques, somaSaques, ptsSaque;
  
  totalSaques = 0;
  somaSaques  = 0;
  
  for(i = 0; i < N; i++) {
    totalSaques = totalSaques + vS[i];
    somaSaques = somaSaques + vS1[i];
  }
  ptsSaque = (somaSaques / totalSaques) * 100;
  printf("Pontos de Saque: %.2f %%.\n", ptsSaque);

  // Calcular a porcentagem dos bloqueios
  float totalBlocks, somaBlocks, ptsBlocks;
  
  totalBlocks = 0;
  somaBlocks  = 0;
  
  for(i = 0; i < N; i++) {
    totalBlocks = totalBlocks + vB[i];
    somaBlocks = somaBlocks + vB1[i];
  }
  ptsBlocks = (somaBlocks / totalBlocks) * 100;
  printf("Pontos de Bloqueio: %.2f %%.\n", ptsBlocks);

  // Calcular a porcentagem dos Ataques
  float totalAttacks, somaAttacks, ptsAttacks;
  
  totalAttacks = 0;
  somaAttacks = 0;
  
  for(i = 0; i < N; i++) {
    totalAttacks = totalAttacks + vA[i];
    somaAttacks = somaAttacks + vA1[i];
  }
  ptsAttacks = (somaAttacks / totalAttacks) * 100;
  printf("Pontos de Ataque: %.2f %%.\n", ptsAttacks);
  
  return 0;
}

