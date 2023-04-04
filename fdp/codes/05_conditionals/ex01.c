#include 

int main() {
	// declarar variaveis
	float N1, N2, N3;
	// entrada de 3 valores (float)
	printf("Por favor, insira 3 numeros: ");
	// leitura desses valores
	scanf("%f %f %f", &N1, &N2, &N3);
	printf("Debug: %.2f %.2f %.2f\n", N1, N2, N3);
	// especificar o maior
	// A: N1 >= N2 E N1 > = 3 --> N1 é o maior
	if(N1>=N2 && N1>=N3) {
		printf("Regra A\n");
		printf("O maior N1: %.2f\n", N1);
	}
	// B: N2 >= N1 E N2 >= N3
	else if (N2 >= N1 && N2 >= N3) {
		printf("Regra B\n");
		printf("O maior N2: %.2f\n", N2);
	}
	// C: N3 >= N1 E N3 >= N2
	else {
		printf("Regra C\n");
		printf("O maior N3: %.2f\n", N3);
	}
	return (0);
}