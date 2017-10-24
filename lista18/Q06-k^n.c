#include <stdio.h>

int potenciaKN(int k, int n) { 
	if(n > 1) {
		return k * potenciaKN(k, n-=1);
	}
	return k;
}

int main() { 
	int k, n;
	scanf("%d%d", &k, &n);
	
	printf("%d\n", potenciaKN(k, n));	
	return 0;
}