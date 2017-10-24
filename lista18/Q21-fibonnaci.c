#include <stdio.h>

int fibonnaci(int n) {
	if(n==0 || n==1) {
		return 0;
	}else if(n==2) {
		return 1;
	}

	return fibonnaci(n-1)+fibonnaci(n-2);
}	


int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", fibonnaci(n));
	return 0;
}