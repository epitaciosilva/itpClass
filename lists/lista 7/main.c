#include <stdio.h>

int main()
{
	// Lemos a frase digitada
	char frase[200];
	gets(frase);
	// Colocamos o ponteiro para o inicio da frase
	char * p = frase;

	// Percorremos cada caractere da frase até encontrar o primeiro espaço
	while (!(*p == ' '))
		p++;
	// Encontrado o primeiro espaço, temos que avançar o ponteiro para que ele não imprima o espaço posteriormente
	p++;
	// Imprimimos a frase após o primeira espaço
	printf("%s\n", p);

	return 0;
}