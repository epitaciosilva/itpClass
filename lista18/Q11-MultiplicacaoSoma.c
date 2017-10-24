#include <stdio.h>

int mult_rec(int n1, int n2) {
	if(n2>0) {
		return n1+mult_rec(n1,n2-1);
	}

	return 0;
}

int main() {
	int n1, n2, i, soma = 0;
	
	scanf("%d", &n1);
	scanf("%d", &n2);

	for(i =1; i<=n2; i++) { 
		soma +=n1;
	}

	printf("%d\n", mult_rec(n1, n2));
	return 0;
}