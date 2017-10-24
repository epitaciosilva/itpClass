#include <stdio.h>

int main()
{
	// Variáveis
	int i;
	int v[] = { 3, 14, 9, 6, 5, 11, 12, 2, 8, 13, 7, 10, 1, 4 };
	/*
	* Você tem que atribuir o endereço de onde pretende começar. Por isso
	* precisa usar o '&'.
	*/
	int * p = &v[4] ;

	for (i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");

	return 0;
}