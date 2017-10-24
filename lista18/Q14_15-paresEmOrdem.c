#include <stdio.h>

void ordemParCrescente(int n1, int n2) {
	if(n1<=n2 && n1%2==0) {
		printf("%d ", n1);
		ordemParCrescente(n1+1, n2);
	}else if(n1<=n2 && n1%2 != 0) {
		ordemParCrescente(n1+1, n2);
	}
}

void ordemParDecrescente(int n) {
	if(n>=0 && n%2==0) {
		printf("%d ", n);
		ordemParDecrescente(n-1);
	}else if(n>=0 && n%2 != 0) {
		ordemParDecrescente(n-1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("\nCrescente: ");
	ordemParCrescente(0, n);
	printf("\nDecrescente: ");
	ordemParDecrescente(n);
	printf("\n");
	return 0;
}
