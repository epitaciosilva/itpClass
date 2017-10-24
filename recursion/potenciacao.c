#include <stdio.h>

int potencia(int n, int k){
	if(1 < k){
		return n * potencia(n, --k);
	}else{
		return n;
	}
}

int main(){
	int k, n;
	scanf("%i", &n);
	scanf("%i", &k);
	
	printf("%i", potencia(n, k));
}
