#include <stdio.h>

int tetranacci(int n) {
	if(n<=3) {
		return 0;
	}else if(n==4) {
		return 1;
	}

	return tetranacci(n-1)+
		tetranacci(n-2)+
		tetranacci(n-3)+
		tetranacci(n-4);
}

int main() {	
	int n;
	scanf("%d", &n);
	printf("%d\n", tetranacci(n));
	return 0;
}