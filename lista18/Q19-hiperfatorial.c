#include <stdio.h>
#include <math.h>

int hiperfatorial(int n) {
	if(n>1) {
		return pow(n,n)*hiperfatorial(n-1);
	}
	
	return 1;
}

int main() {
	int n; 
	scanf("%d", &n);

	printf("%d\n", hiperfatorial(n));

	return 0;
}