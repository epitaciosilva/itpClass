#include <stdio.h>

int somatorio(int n) { 
	if(n>=1) {
		return n+somatorio(n-1);
	}

	return 0;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", somatorio(n));
}
