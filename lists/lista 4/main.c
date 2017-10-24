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
	int maior = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &chuvas[i]);

		if (i == 0)
			maior = chuvas[i];
		else if (chuvas[i] > maior)
			maior = chuvas[i];
	}

	for (i = 0; i < n; i++)
	{
		if (chuvas[i] >= maior)
			printf("%d ", (i+1));
	}
	printf("%d", maior);

	printf("\n");

	return 0;
}