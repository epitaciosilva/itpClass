#include <stdio.h>

int multiplicacaoPorSoma(int n1, int n2){
	if(n2 > 1){
		return n1 + multiplicacaoPorSoma(n1, --n2);
	}
}

int main(){

	printf("%d", multiplicacaoPorSoma(2,4));
}
