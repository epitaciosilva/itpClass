#include <stdio.h>

int fibonacci(int num) {
	if(num == 1 || num == 2) {
		return 1;
	}else if(num == 0) {
		return 0;
	}

	return fibonacci(num-1) + fibonacci(num-2);
}

int main() {
	int i, num;
	scanf("%d", &num);
	i = fibonacci(num);
	printf("%d\n", i);
}	