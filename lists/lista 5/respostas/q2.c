#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que n terá valor 1 <= n <= 100
	do
	{
		scanf("%d", &n);
		// Caso n não possua valor 1 <= n <= 100
	}
	while ( !( ( n >= 1 ) && ( n <= 100 ) ) );

	// Ler n números
	int i; // Contador
	int numeros[n]; // Vetor de armazenamento
	for (i = 0; i < n; i++)
	{
		scanf("%d", &numeros[i]);
	}

	// Verificamos se os números se repetem
	int j; // Contador que usaremos para percorrer o vetor na verificação
	int count = 0; // Quantas vezes um número se repete
	for (i = 0; i < (n-1); i++)
	{
		// Percorremos o vetor a partir do elemento a frente de numeros[i]
		for (j = (i+1); j < n; j++)
		{
			// Verifica se o número se repete
			if (numeros[i] == numeros[j])
				count++; // Se sim, aumenta o contador
		}

		// Se o contador tiver maior ou igual a 1, algum elemento verificado se repete
		if (count >= 1)
			break;
	}

	if (count >= 1)
		printf("sim\n");
	else
		printf("não\n");

	return 0;
}
