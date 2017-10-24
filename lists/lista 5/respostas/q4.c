#include <stdio.h>

int main() {
	int m, n;

	// Esse do...while garante que m terá valor 1 <= m <= 30
	do
	{
		scanf("%d", &m);
	}
	while ( !( ( m >= 1 ) && ( m <= 30 ) ) );

	// Esse do...while garante que n terá valor m <= n <= 50
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= m ) && ( n <= 50 ) ) );

	// Ler os números apostados e os sorteados
	int i;
	int sorteados[m], apostados[n];
	// Como a professora pediu para assumir, não iremos verificar se os elementos já existem
	for (i = 0; i < m; i++)
		scanf("%d", &sorteados[i]);
	for (i = 0; i < n; i++)
		scanf("%d", &apostados[i]);

	// Verificamos agora quantos ele acertou
	int j;
	int acertos = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			// Verificamos se o número apostado é igual ao sorteado
			if (apostados[j] == sorteados[i])
			{
				acertos++;
				break;
			}
		}
	}

	// Imprimimos a quantidade de acertos
	printf("%d\n", acertos);

	return 0;
}