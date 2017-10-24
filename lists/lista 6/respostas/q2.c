#include <stdio.h>

int main() {
	int m, n;

	// Esse do...while garante que m terá valor 0 < m <= 20 
	do
	{
		scanf("%d", &m);
	}
	while ( !( m > 0 && m <= 20 ) );

	// Esse do...while garante que m terá valor 0 < n <= 20 
	do
	{
		scanf("%d", &n);
	}
	while ( !( n > 0 && n <= 20 ) );

	// Declaramos a matriz 'm' por 'n'
	int matriz[m][n];
	// Contadores para os 'fors'
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			// Recebemos os valores da matriz
			scanf("%d", &matriz[i][j]);
	}

	/*
	* Imprimimos sua transposta.
	* Perceba que apenas trocamos os 'fors' que usamos anteriormente para receber os valores.
	* Mesma lógica da matriz transposta (número de linhas e colunas trocadas).
	*/
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < m; i++)
			printf("%d ", matriz[i][j]);
		printf("\n");
	}

	return 0;
}