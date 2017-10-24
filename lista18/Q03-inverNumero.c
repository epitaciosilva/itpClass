#include <stdio.h>

int inverter(int num) {
	printf("%d", num%10);
	num /= 10;
	
	if(num == 0) {
		printf("\n");
		return 0;
	}

	inverter(num);
}

int main() {
	int num;
	scanf("%d", &num);
	
	inverter(num);
	return 0;
}