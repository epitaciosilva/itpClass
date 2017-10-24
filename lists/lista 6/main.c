#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// Arquivo do mapa
	FILE *arq = fopen( "teste.in", "r" );
	// Pega o tamanho do mapa
	int linhas, colunas = 0;
	fscanf( arq, "%d", &linhas );
	// Mapa
	char **mapa;
	mapa = malloc( linhas * sizeof(char *) );

	char *caractere;
	int i = 0, j = 0;
	for (i = 0; i < linhas; i++)
	{
		mapa[i] = malloc(30 * sizeof(char));
		fscanf( arq, "%s", caractere );
		while(1)
		{
			if (caractere[j] == '\0')
				break;
			mapa[i][j] = caractere[j];
			j++;
		}
	}
	return 0;
}