#include <stdio.h>

int fatorial(int n) {
	if(n>1) {
		return n*fatorial(n-1);
	}

	return 1;
}

int superfatorial(int n) { 
	if(n>1) {
		return fatorial(n)*superfatorial(n-1);
	}

	return 1;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", superfatorial(n));
	return 0;
}