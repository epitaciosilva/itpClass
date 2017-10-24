#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor 1 <= n <= 20
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 20 ) ) );

	// Ler a quantidade de chuvas de cada mês
	int i;
	int chuvas[n];
	for (i = 0; i < n; i++)
		scanf("%d", &chuvas[i]);

	// Imprimir a quantidade de meses com menos dias de chuva
	int j;
	int qtde_meses;
	for (i = 0; i < n; i++)
	{
		qtde_meses = 0; // Zeramos o contador de quantidade
		for (j = 0; j < n; j++)
		{
			// Verificamos se os elementos são diferentes e se a quantidade de dais de chuva de J é menor que o elemento I
			if (( i != j) && ( chuvas[j] < chuvas[i] ))
				qtde_meses++;
		}
		printf("%d ", qtde_meses);
	}
	printf("\n");

	return 0;
}