#include <stdio.h>

int fatorialQuadrupulo(int n1, int n2) {
	if(n1 > n2) {
		return n1*fatorialQuadrupulo(n1-1, n2);
	}
	return 1;		
}	

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", fatorialQuadrupulo(2*n, n));
	return 0;	
}
