#include <stdlib.h>
#include <stdio.h>

int somaAteN(int n, int auxTamanho, int auxAux){
	if(auxAux >= auxTamanho)
		return n + somaAteN(--n, ++auxTamanho, auxAux);
}

int main(){
	int n;
	scanf("%i", &n);
	printf("%i", somaAteN(n, 1, n));	
}
