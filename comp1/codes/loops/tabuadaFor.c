#include<stdio.h>
int main() {
    // nro, multiplicador, resultado
    int nro, mult, resultado;
    printf("Digite um nro: ");
    scanf("%d", &nro);
    /* condic inicial, condicao parada, incremento*/
    for(mult = 1 ; mult <= 1000000000;  mult++) {
        resultado = mult * nro;
        printf(" %d", resultado);
    }
    return 0;
}
