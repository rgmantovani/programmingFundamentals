#include<stdio.h>
//#include<ctype.h>  // toupper, tolower
int main() {
    char caracter;
    for(;;) {
        printf("Digite um caracter: ");
        scanf("%c", &caracter);
        //caracter = tolower(caracter);
        setbuf(stdin, NULL);
        printf("Caracter = %c\n", caracter);
        if(caracter == 'e' || caracter == 'E'

           || caracter == 's' || caracter == 'S') {
            break;
        }
    }
    printf("terminou o loop!");
    return 0;
}
