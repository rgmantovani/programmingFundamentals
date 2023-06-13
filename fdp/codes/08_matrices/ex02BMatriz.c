#include <stdio.h>
#define ORDEM 3
int main(int argc, const char * argv[]) {
    int matriz[ORDEM][ORDEM];
    int indiceLinha, indiceColuna;
    int somaDiagPrincipal, somaDiagSecundaria;

    // -----------------------------------------------------------
    // AQUI - 2 laços p pedir os valores da matriz (scanf)
    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            printf("Insira o valor da posicao [%d][%d] = ", indiceLinha, indiceColuna);
            scanf("%d", &matriz[indiceLinha][indiceColuna]);
        }
    }
    // -----------------------------------------------------------

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
