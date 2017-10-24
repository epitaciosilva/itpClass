#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor 1 <= n <= 30
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 30 ) ) );

	int i;
	float notas[n], notas_sum = 0.0;

	// Recebemos as notas dos alunos
	for (i = 0; i < n; i++)
	{
		scanf("%f", &notas[i]);
		notas_sum += notas[i]; // Somamos todas as notas
	}

	// Pegamos a média
	float media = notas_sum / n;

	// Percorremos as notas e as avaliamos se estão acima da média
	int count = 0;  // Contador de alunos maior ou igual a média
	for (i = 0; i < n; i++)
	{
		// Se a nota for maior ou igual a média, aumentamos o contador
		if (notas[i] >= media)
			count++;
	}

	printf("%d\n", count);

	return 0;
}