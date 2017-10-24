#include <stdio.h>

void multiplicacaoRussa(int n1, int n2) {
	if(n1>=1) {
		printf("%d %d ", n1, n2);
		if(n1%2 !=0) {
			printf("%d\n", n2);
		}else{
			printf("\n");
		}
		multiplicacaoRussa(n1/2, n2*2);
	}
}

int main() {
	int n1, n2;

	scanf("%d", &n1);
	scanf("%d", &n2);
	printf("A B Parcelas\n");
	multiplicacaoRussa(n1, n2);
	return 0;
}