#include <stdio.h>

double catalan(double n) {
	if(n==0) {
		return 1;
	}
	
	double expressao = 2*(2*n-1)/(n+1);
	return expressao * catalan(n-1);
}

int main() {
	double n;
	scanf("%lf", &n);

	printf("%.0lf\n", catalan(n));
	return 0;
}