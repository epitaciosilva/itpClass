#include <stdio.h>

void ordemRecursiva(int n1, int n2) {
	if(n1<n2) {
		printf("%d\n", n1);
		ordemRecursiva(n1+1, n2);
	}else if(n1==n2) {
		printf("%d\n", n2);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	ordemRecursiva(0, n);
	return 0;
}
