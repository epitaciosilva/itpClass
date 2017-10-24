#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor 1 <= n <= 20
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 20 ) ) );

	// Ler a quantidade de chuvas de cada mês e analisamos qual é a maior quantidade de chuvas
	int i;
	int chuvas[n];
	int maior = 0; // Usaremos para pegar a maior quantidade de chuvas
	for (i = 0; i < n; i++)
	{
		scanf("%d", &chuvas[i]);

		// Se for o primeiro valor inserido, salvar como a maior quantidade de chuvas
		if (i == 0)
			maior = chuvas[i];
		// Caso a quantidade inserida seja maior que a quantidade salve, atualiza-o
		else if (chuvas[i] > maior)
			maior = chuvas[i];
	}

	// Percorre novamente os dias de chuva
	for (i = 0; i < n; i++)
	{
		// Se a quantidade de chuvas do dia for maior ou igual a maior quantidade de chuvas registrado
		if (chuvas[i] >= maior)
			printf("%d ", (i+1));
	}
	// Imprime a maior quantidade de chuvas
	printf("%d", maior);

	printf("\n");

	return 0;
}