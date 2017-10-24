#include <stdio.h>

int tetranacci(int n){
	if( n == 1 || n == 2 || n == 3)
		return 0;
	else if( n == 4 || n == 5)
		return 1;
	else
		return tetranacci(n-3) + tetranacci(n-4) + tetranacci(n-2) + tetranacci(n-1);
}

int main(){
	//4
	printf("%i", tetranacci(8));
}
