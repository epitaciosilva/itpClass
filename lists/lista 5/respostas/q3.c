#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que n terá valor 1 <= n <= 100
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 100 ) ) );

	// Ler n números
	int i; // Contador
	int numeros[n]; // Vetor de armazenamento
	for (i = 0; i < n; i++)
	{
		scanf("%d", &numeros[i]);
	}

	// Agora ordenamos o array de forma decrescente
	int j; // Segundo contador que usaremos
	int aux; // Valor auxiliar
	// Percorremos todo o vetor
	for (i = 0; i < n; i++)
	{
		// Percorremos o vetor de trás para frente até o elemento vetor[i]
		for (j = (n-1); j > i; j--)
		{
			// Verificamos se o elemento n é maior que o elemento n-1 (o elemento anterior)
			if (numeros[j] > numeros[j-1])
			{
				// Caso seja, realizamos a troca
				aux = numeros[j];
				numeros[j] = numeros[j-1];
				numeros[j-1] = aux;
			}
		}
	}

	// imprime o vetor ordenado de modo decrescente
	for (i = 0; i < n; i++)
		printf("%d ", numeros[i]);
	printf("\n");

	return 0;
}