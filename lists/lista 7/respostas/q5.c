#include <stdio.h>

int main()
{
	// Número de questões
	int n;
	scanf("%d", &n);

	// Contador
	int i;
	
	// Vetor para armazenar as respostas
	int respostas[n];
	// Ler 'n' respostas do gabarito
	for (i = 0; i < n; i++)
		scanf("%d", &respostas[i]);
	
	// Variável para armazenar a quantidade de acertos
	int acertos = 0;
	// Vetor para armazenar as respostas do aluno
	int aluno[n];
	// Ler 'n' respostas do aluno
	for (i = 0; i < n; i++)
	{
		scanf("%d", &aluno[i]);

		// Já vamos comparando as respostas do aluno com as do gabarito
		if (aluno[i] == respostas[i])
			acertos++;

	}

	// Imprimimos a quantidade de acertos
	if (acertos == 0)
		printf("Não houve acertos\n");
	else if (acertos == 1)
		printf("1 acerto\n");
	else
		printf("%d acertos\n", acertos);

	return 0;
}