#include <stdio.h>

int repetidos(int n, int r) {
	if(n>0 && n%10==r) {
		return 1+repetidos(n/10, r);
	}else if (n>0 && n%10 != r) { 
		return repetidos(n/10, r);
	}	

	return 0;
}

int main() {
	int n, r, soma = 0;
	scanf("%d", &n);
	scanf("%d", &r);

	while(n!=0) {
		if(n%10==r) {
			soma++;
		}
		n /= 10;
	}

	printf("%d\n", repetidos(n,r));
}