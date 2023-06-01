#include<stdio.h>
int main() {
    int variavel;
    //contar de 1 a 100 (3x)
    // for
    //for(inicial, criterio, incremento)
    printf("For: \n");
    for(variavel = 1; variavel <=100; variavel = variavel+1) {
        printf("%d ", variavel);
    }
    //while
    printf("\n");
    printf("While: \n");
    variavel = 1;
    while(variavel <= 100) {
         printf("%d ", variavel);
         variavel = variavel+1;
    }
    //dowhile
    printf("\n");
    printf("Do-While: \n");
    variavel = 1;
    do {
        printf("%d ", variavel);
        variavel = variavel+1;
    } while(variavel<=100);
    return 0;

}
