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
	* Percorremos a matriz. 
	* Perceba que não iremos percorrer as extremidades, para isso bastamos modificar nossos 'fors':
	* começamos com as variáveis igual a 1 e percorremos até a variável-1 (m-1, n-1).
	*/
	int media[5]; // Usaremos essa variável para salvar a média.
	for (i = 1; i < m-1; i++)
	{
		for (j = 1; j < n-1; j++)
		{
			/*
			*          | [i-1][j] |
			*--------------------
			* [i][j-1] | elemento | [i][j+1]
			*--------------------
			*          | [i+1][j] |
			*/
			media[0] = ( matriz[i-1][j] + matriz[i+1][j] + matriz[i][j-1] + matriz[i][j+1] )/4;
			media[1] = ( matriz[i-2][j] + matriz[i][j] + matriz[i-1][j-1] + matriz[i-1][j+1] )/4;
			// Se o valor for maior que a média, imprime as coordenadas dele na tela
			if (matriz[i][j] < media)
				printf("(%d, %d)\n", i, j);
		}
	}

	return 0;
}