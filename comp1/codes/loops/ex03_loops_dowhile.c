#include<stdio.h>
// ler idade de 10 pessoas, calcular a quantidade de malucos >= 18
int main() {
    int contador, idade, maioresIdade;
    // inicializar variaveis
    contador = 1;
    maioresIdade = 0;
    do {
        do {
            // forçar a informar um valor positivo
             printf("Contador = %d\n", contador);
             printf("Informe a idade: ");
             scanf("%d", &idade);
        } while(idade < 0 );
        // idade >= 18
        if(idade >= 18) {
            maioresIdade = maioresIdade+1;
        }
        // incrementar o contador
        contador = contador + 1;
    } while( contador <= 10 );
    printf("Qtde >= 18: %d\n", maioresIdade);
    return 0;
}
