#include <stdio.h>
#define ORDEM 3
int main(int argc, const char * argv[]) {
    int matriz[ORDEM][ORDEM] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int indiceLinha, indiceColuna;
    int somaDiagPrincipal, somaDiagSecundaria;

/*  00 01 02
    10 11 12
    20 21 22
 */
    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            printf("%d ", matriz[indiceLinha][indiceColuna]);
        }
        printf("\n");
    }
    
    //diagP = 00 + 11 + 22
    somaDiagPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    printf("* Soma Diag Princ = %d\n", somaDiagPrincipal);
    
//    diagS = 02 + 11 + 20
    somaDiagSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
    printf("* Soma Diag Secun = %d\n", somaDiagSecundaria);
   
    return 0;
}
