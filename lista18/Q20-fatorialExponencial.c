#include <stdio.h>
#include <math.h>

long fatorialExponencial(int n) {
	if(n>1) {
		return pow(n,fatorialExponencial(n-1));
	}

	return 1;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%ld\n", fatorialExponencial(n));

	return 0;
}