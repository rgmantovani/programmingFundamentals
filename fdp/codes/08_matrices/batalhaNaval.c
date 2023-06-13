#include <stdio.h>
#define ORDEM 10
#define BARCO_BIG 1
#define BARCO_G 2
#define BARCO_M 3
#define BARCO_P 4
#define TIROS   5

int main(int argc, const char * argv[]) {
    char matriz[ORDEM][ORDEM], mapa[ORDEM][ORDEM];
    int indiceLinha, indiceColuna;
    int tentativas = 0;
    int i, j;

    // tabuleiro inicial
    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            matriz[indiceLinha][indiceColuna] = '?';
            mapa[indiceLinha][indiceColuna] = '?';
        }
    }
    // -----------------------------------------------------------

    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            printf("%c ", mapa[indiceLinha][indiceColuna]);
        }
        printf("\n");
    }
    
    // posicionar o barco big (4 posicoes)
    matriz[1][1] = 'b'; matriz[2][1] = 'b';
    matriz[3][1] = 'b'; matriz[4][1] = 'b';
    
    //posicionar os barcos grandes (2 de tam 3)
    matriz[5][4] = 'b'; matriz[6][4] = 'b'; matriz[7][4] = 'b';
    matriz[0][5] = 'b'; matriz[0][6] = 'b'; matriz[0][7] = 'b';
    
    //posicionar os barcos medios (3 de tam 2)
    matriz[4][6] = 'b'; matriz[5][6] = 'b';
    matriz[9][7] = 'b'; matriz[9][8] = 'b';
    matriz[9][1] = 'b'; matriz[9][2] = 'b';

    //posicionar os barcos pequenos (4 de tamanho 1)
    matriz[3][9] = 'b';
    matriz[7][2] = 'b';
    matriz[6][8] = 'b';
    matriz[8][9] = 'b';
    
    // eqnto tiro (atira)
    while(tentativas < TIROS) {
        printf("\n* Qual posicao quer atirar: ");
        scanf("%d %d", &i, &j);
        tentativas++;
        if(matriz[i][j] == 'b') {
            mapa[i][j] = 'X';
        } else {
            mapa[i][j] = ' ';
        }
        
        for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
            for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna++) {
                printf("%c ", mapa[indiceLinha][indiceColuna]);
            }
            printf("\n");
        }
    }
    
    printf("\n Acabaram-se os tiros\n");
    
    return 0;
}
