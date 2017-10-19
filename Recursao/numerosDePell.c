#include <stdio.h>

int numerosDePell(int n){
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else if(n > 2)
		return 2*numerosDePell(n-1) + numerosDePell(n-2);


}


int main(){
	printf("%i", numerosDePell(8));
}

