#include <stdio.h>

int main()
{
	// Contador
	int i;

	// Ler 'n' inteiros
	int n;
	scanf("%d", &n);
	// Primeira sequência
	int sequencia1[n];
	for (i = 0; i < n; i++)
		scanf("%d", &sequencia1[i]);

	// Ler 'm' inteiros
	int m;
	scanf("%d", &m);
	// Segunda sequência
	int sequencia2[m];
	for (i = 0; i < m; i++)
		scanf("%d", &sequencia2[i]);

	// Imprime a sequência ordenada m+n
	// Contadores de cada vetor de sequência
	int cn = 0, cm = 0;
	while ((cn < n) && (cm < m))
	{
		// Verifica se o número da sequencia1 é menor ou igual ao da sequencia2
		if (sequencia1[cn] <= sequencia2[cm])
		{
			// Imprime o menor número da primeira sequência e avança no seu respectivo vetor
			printf("%d ", sequencia1[cn]);
			cn++;
		}
		else
		{
			// Imprime o menor número da segunda sequência e avança no seu respectivo vetor
			printf("%d ", sequencia2[cm]);
			cm++;
		}
	}
	// Esse 'while' se encerra quando um dos dois vetores chega ao fim

	// Verificamos qual vetor chegou ao fim e ai imprimimos o restanto do vetor que não chegou ao fim
	if (cn == n)
	{
		// Se a primeira sequência tiver se encerrado, imprime a segunda sequência
		for (i = cm; i < m; i++)
			printf("%d ", sequencia2[i]);
	}
	else
	{
		// Se a segunda sequência tiver se encerrado, imprime a primeira sequência
		for (i = cn; i < n; i++)
			printf("%d ", sequencia1[i]);
	}

	printf("\n");

	return 0;
}