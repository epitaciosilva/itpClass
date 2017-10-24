#include <stdio.h>

int main() {
	int n;

	// Esse do...while garante que m terá valor n > 1
	do
	{
		scanf("%d", &n);
	}
	while ( !( n > 1 ) );

	// Agora iremos fatorar o n
	int primo = 2; // Contador que usaremos para os números primos
	int qtde_primo = 0; // Quantidade de primos do contador usados
	/*
	* Usaremos n>0 no 'while' apenas para ele ficar eternamente no ciclo.
	* O que irá quebrar o ciclo é o primeiro 'if'
	*/
	while (n > 0)
	{
		// Quando não puder mais fatorar
		if (n == 1)
		{
			printf("%d^%d ", primo, qtde_primo);
			break;
		}
		// Quando for um novo valor para primo e ele não poder dividor o n
		else if (( qtde_primo == 0 ) && !( n % primo == 0 ))
		{
			primo++; // Avançamos o valor em busca de um número primo
			continue;
		}
		// Quando ele for um número primo que fatora n
		else if (n % primo == 0)
		{
			qtde_primo++;
			n /= primo;
		}
		// Quando o primo não puder mais fatorar n
		else
		{
			printf("%d^%d ", primo, qtde_primo);
			primo++;
			qtde_primo = 0;
		}
	}
	printf("\n");

	return 0;
}