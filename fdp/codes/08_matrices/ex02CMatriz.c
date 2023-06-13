#include <stdio.h>
#define ORDEM 3
int main(int argc, const char * argv[]) {
    int matriz[ORDEM][ORDEM];
    int indiceLinha, indiceColuna;
    int somaDiagPrincipal = 0, somaDiagSecundaria = 0;

    // -----------------------------------------------------------
    // AQUI - 2 laços p pedir os valores da matriz (scanf)
    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            printf("Insira o valor da posicao [%d][%d] = ", indiceLinha, indiceColuna);
            scanf("%d", &matriz[indiceLinha][indiceColuna]);
            // soma elementos da diagonal princial
            if(indiceLinha == indiceColuna) {
                somaDiagPrincipal = somaDiagPrincipal + matriz[indiceLinha][indiceColuna];
            }
            // soma elementos da diagonal secundaria
            if((indiceLinha + indiceColuna) == (ORDEM-1)){
                somaDiagSecundaria = somaDiagSecundaria + matriz[indiceLinha][indiceColuna];
            }
        }
    }
    // -----------------------------------------------------------

    for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
        for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna ++) {
            printf("%d ", matriz[indiceLinha][indiceColuna]);
        }
        printf("\n");
    }
    
    printf("* Soma Diag Princ = %d\n", somaDiagPrincipal);
    printf("* Soma Diag Secun = %d\n", somaDiagSecundaria);
   
    return 0;
}
