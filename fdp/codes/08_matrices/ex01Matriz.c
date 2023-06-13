#include <stdio.h>
#define ORDEM 10//5
// diagonal principal = 1, nas demais celulas = 0
// 00, 11, 22, 33, 44 [indice linha, indice coluna]
int main(int argc, const char * argv[]) {
    int matriz[ORDEM][ORDEM], indiceLinha, indiceColuna;
    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            // acessar uma celula [indiceLinha][indiceColuna]
            if(indiceLinha == indiceColuna) {
                matriz[indiceLinha][indiceColuna] = 1;
            } else {
                matriz[indiceLinha][indiceColuna] = 0;
            }
            printf("%d ", matriz[indiceLinha][indiceColuna]);
        }
        printf("\n");
    }
    return 0;
}
