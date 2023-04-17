#include<stdio.h>

int main() {
	// verificar se o usuario digitou um inteiro positivo
	int num = -1;
	// Rodandommmmmmmm ... eqnto o num < 0
	while (num <= 0){
		printf("Digite um nro inteiro positivo: ");
		scanf("%d", &num);
	}
	/*do{
	printf("Digite um nro inteiro positivo: ");
	scanf("%d", &num);
	} while (num < 0);*/
	printf("Fim!");
	return 0;
}