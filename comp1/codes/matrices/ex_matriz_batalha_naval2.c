#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PEQUENOS 3 // tamanho 1 celula
#define MEDIOS   2 // tamanho 2 celulas
#define GRANDES  1 // tamanho 3 celulas
#define TAMANHO 10
#define TIROS 10
int main(){

    char mapa[TAMANHO][TAMANHO]; // 10 x 10
    int x, y;
    int posX, posY, qtdeTiros = 0;
    // 0 - agua
    // 1 - barco
    for(y=0; y<TAMANHO; y++){ // controla linha
        for(x=0; x<TAMANHO; x++) { //controla coluna
            mapa[x][y] = '0';
            printf(" %c", mapa[x][y]);
        }
        printf("\n");
    }

    // 9 9, 1 7, 7 8 [1-10] --> [0-9]
    // barcos unitarios (tamanho 1)
    mapa[8][8] = 'b';
    mapa[0][6] = 'b';
    mapa[6][7] = 'b';

    // barcos de tamanho 2 (2)
    //0,0, 0,1
    // 6,5, 6,6
    mapa[0][0] = 'b'; mapa[0][1] = 'b';
    mapa[6][5] = 'b'; mapa[6][6] = 'b';

    // tamanho 3
    mapa[3][3] = 'b'; mapa[4][3]  = 'b'; mapa[5][3] = 'b';

    printf("\n ------------------\n");
    for(y=0; y<TAMANHO; y++){ // controla linha
        for(x=0; x<TAMANHO; x++) { //controla coluna
            printf(" %c", mapa[y][x]);
        }
        printf("\n");
    }

     printf("\n ------------------\n");
    do {
        printf("Qual posicao deseja atirar: (x,y)");
        scanf("%d %d", &posX, &posY);
        //(posX, posY)
        if(mapa[posX][posY] == 'b') {
            mapa[posX][posY] = 'X';
        } else {
             mapa[posX][posY] = ' ';
        }
        qtdeTiros++;
        printf("\n ------------------\n");
        for(y=0; y<TAMANHO; y++){ // controla linha
            for(x=0; x<TAMANHO; x++) { //controla coluna
                printf(" %c", mapa[y][x]);
            }
            printf("\n");
        }


    } while(qtdeTiros<=TIROS);


    return 0;
}

