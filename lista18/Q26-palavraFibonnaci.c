#include <stdio.h>

void palavraFibonnaci(int n){
	if(n<=0) {
		printf("b");
	}else if(n==1){
		printf("a");
	}
	if(n>1){
		palavraFibonnaci(n-1);
		palavraFibonnaci(n-2);
	}
}

int main() {	
	int n;
	scanf("%d", &n);

	palavraFibonnaci(n);
	printf("\n");
	return 0;
}