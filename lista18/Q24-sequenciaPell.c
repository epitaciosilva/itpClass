#include <stdio.h>

int pell(int n) {
	if(n<=1) {
		return n;
	}

	return 2*pell(n-1)+pell(n-2);
}

int main() {	
	int n;
	scanf("%d", &n);

	printf("%d\n", pell(n));

	return 0;
}