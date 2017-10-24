#include <stdio.h>

#include <stdio.h>

void binario(int n) {
	if(n/2 != 0) {
		binario(n/2);
		// printf("%d\n", n);
	}
	// printf("%d ", n);
	printf("%d", n%2);
}

int multiplicacaoSoma(int n1, int n2) {
	if(n1>=1) {
		return n2+multiplicacaoSoma(n1-1, n2);
	}

	return 0;
}

int main() {
	char escolha;
	scanf("%s", &escolha);
	if(escolha == 'a') {
		int n;
		scanf("%d", &n);

		binario(n);

		printf("\n");
	}else if(escolha == 'b') {
		int n1, n2;
		scanf("%d", &n1);
		scanf("%d", &n2);
		printf("%d\n", multiplicacaoSoma(n1, n2));
	}
}
