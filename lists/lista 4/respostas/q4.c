#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor 1 <= n <= 10
	do
	{
		scanf("%d", &n);
	}
	while ( !( ( n >= 1 ) && ( n <= 10 ) ) );

	// Recolhemos os valores
	int i;
	int permutacoes[n];
	for (i = 0; i < n; i++)
		scanf("%i", &permutacoes[i]);

	/*
	* Agora iremos percorrer os valores e verificando de eles são uma permutação de 1 até n.
	* Sendo assim, usaremos um contador que ao final deverá possuir o valor de n.
	*/
	int j;
	int aux = 0; // Contador que no final possuirá o valor de n
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			/*
			* Se o contador + 1 for igual ao valor da permutação, então ele quebra a verificação
			* e adiciona +1 ao seu valor.
			* Assim, no final, 'aux' possuirá o valor de 'n' se o vetor 'permutações' foi uma 
			* permutação de 1 até 'n'.
			*/
			if ((aux+1) == permutacoes[j])
			{
				aux++;
				break;
			}
		}
	}

	// Imprimimos o valor
	if (aux == n)
		printf("sim\n");
	else
		printf("não\n");

	return 0;
}