#include <stdio.h>

int padovan(int n) {
	if(n<=2) {
		return 1;
	}

	return padovan(n-2)+padovan(n-3);
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d\n", padovan(n));
	return 0;
}