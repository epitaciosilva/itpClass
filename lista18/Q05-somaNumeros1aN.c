#include <stdio.h>
int soma1aN(int n) {
	
	if(n > 1) { 
		return n + soma1aN(n-1);
	}

	return 1;
}

int main() { 
	int N;
	scanf("%d", &N);
	printf("%d\n", soma1aN(N));
	return 0;
}