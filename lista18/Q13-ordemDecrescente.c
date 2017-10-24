#include <stdio.h>

void ordemRecursiva(int n) {
	if(n>0) {
		printf("%d\n", n);
		ordemRecursiva(n-1);
	}else if(n==0) {
		printf("0\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);

	ordemRecursiva(n);
	return 0;
}