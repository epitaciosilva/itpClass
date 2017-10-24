#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor 1 <= n <= 20
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 20 ) ) );

	// Ordem de largada e ordem de chegada
	int i;
	int largada[n], chegada[n];
	for (i = 0; i < n; i++)
		scanf("%d", &largada[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &chegada[i]);

	// Calcular a quantidade de posições ganhas
	int j;
	int posicoes[n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			// Verificamos se são o mesmo piloto
			if (largada[i] == chegada[j])
				// Se forem, pegamos quantas posições ele perdeu ou avançou
				posicoes[i] = i-j;
		}
	}

	// Lemos todas as posições e encontramos a maior ou se teve empate ou nenhum avanço
	int identificador;
	int empate = 0; // Marcador de empate (igual a 0 é que não teve empate, maior que 0 é que teve)
	for (i = 0; i < n; i++)
	{
		if ( i == 0 )
			identificador = i;
		// Verificamos se existe alguém ganhou mais posições
		else if (posicoes[i] > posicoes[identificador])
		{
			empate = 0;
			identificador = i;
		}
		// Verificamos se ganharam a mesma quantidade de posições
		else if (posicoes[i] == posicoes[identificador])
			empate++;
	}

	// Imprimimos o resultado
	if (( posicoes[identificador] == 0 ) || ( empate > 0 ))
		printf("indefinido\n");
	else
		printf("%d\n", largada[identificador]);

	return 0;
}