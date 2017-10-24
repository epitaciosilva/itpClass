#include <stdio.h>

int main()
{
	// Para ler 'n' números reais
	int n;
	scanf("%d", &n);

	// Vetor para armazenar os dados caso queira usar posteriormente
	float vetor[n];
	// Variável de comparação, para descobrir qual é o maior
	float maior = 0.0;
	// Indice do maior número real
	int indice;
	// Contador
	int i;
	// Recolhemos os 'n' números reais
	for (i = 0; i < n; i++)
	{
		scanf("%f", &vetor[i]);
		// Se o número digitado for maior que o já armazendo
		if (vetor[i] > maior)
		{
			// Salva novo número real maior
			maior = vetor[i];
			// Salva o índice +1 do número real maior (a questão diz para começar a contar do 1)
			indice = i+1;
		}
	}

	// Imprime o índice do maior número real
	printf("%d\n", indice);

	return 0;
}