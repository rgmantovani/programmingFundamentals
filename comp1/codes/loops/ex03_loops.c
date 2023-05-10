#include<stdio.h>
// ler idade de 10 pessoas, calcular a quantidade de malucos >= 18
int main() {

    int contador, idade, maioresIdade;
    // inicializar variaveis
    contador = 1;
    maioresIdade = 0;

    while( contador <= 10 ) {
         printf("Contador = %d\n", contador);
         printf("Informe a idade: ");
         scanf("%d", &idade);
         // idade >= 18
         if(idade >= 18) {
            maioresIdade = maioresIdade+1;
         }
         // incrementar o contador
         contador = contador + 1;
    }
    printf("Qtde >= 18: %d\n", maioresIdade);


    return 0;
}
