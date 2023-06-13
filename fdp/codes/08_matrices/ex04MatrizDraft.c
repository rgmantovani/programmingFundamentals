int linhaMaior, colunaMaior;
// obter matriz (definir / scanf)
for(indiceLinha = 0; indiceLinha < ORDEM; indiceLinha++) {
	for(indiceColuna = 0; indiceColuna < ORDEM; indiceColuna++) {

		//verificando se é o primeiro elemento [0,0]
		if(indiceColuna == 0 && indiceLinha == 0) {
			maior = matriz[indiceLinha][indiceColuna];
			linhaMaior  = 0;
			colunaMaior = 0;
		} else {
			// se o elemento é maior que o maior
			if(matriz[indiceLinha][indiceColuna] > maior) {
				maior = matriz[indiceLinha][indiceColuna];
				linhaMaior = indiceLinha;
				colunaMaior = indiceColuna;
			}
		}

	}
}