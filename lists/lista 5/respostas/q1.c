#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int i, j;
	/*
	* A quantidade de linhas e colunas é igual a n,
	* ou seja, estamos gerando uma matriz n por n.
	* O valor de cada elemento é igual a i+j-1;
	* Exemplo: a13 = 1+3-1 = 3.
	*/
	for (i = 1; i <= n; i++)
	{
		for (j = i; j < (n+i); j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
