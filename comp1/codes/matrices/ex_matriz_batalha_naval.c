#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PEQUENOS 3 // tamanho 1 celula
#define MEDIOS   2 // tamanho 2 celulas
#define GRANDES  1 // tamanho 3 celulas
#define TAMANHO 10
int main(){

    int mapa[TAMANHO][TAMANHO]; // 10 x 10
    int x, y;
    // 0 - agua
    // 1 - barco
    for(y=0; y<TAMANHO; y++){ // controla linha
        for(x=0; x<TAMANHO; x++) { //controla coluna
            mapa[x][y] = 0;
            printf(" %d", mapa[x][y]);
        }
        printf("\n");
    }

    // 9 9, 1 7, 7 8 [1-10] --> [0-9]
    // barcos unitarios (tamanho 1)
    mapa[8][8] = 1;
    mapa[0][6] = 1;
    mapa[6][7] = 1;

    // barcos de tamanho 2 (2)
    //0,0, 0,1
    // 6,5, 6,6
    mapa[0][0] = 1; mapa[0][1] = 1;
    mapa[6][5] = 1; mapa[6][6] = 1;

    // tamanho 3
    mapa[3][3] = 1; mapa[4][3]  = 1; mapa[5][3] = 1;

    printf("\n ------------------\n");
    for(y=0; y<TAMANHO; y++){ // controla linha
        for(x=0; x<TAMANHO; x++) { //controla coluna
            printf(" %d", mapa[y][x]);
        }
        printf("\n");
    }



    return 0;
}

