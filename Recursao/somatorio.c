#include <stdio.h>
//Somatorio recursivo de [i, j] com incremento em k

int somaSerie(int i, int j, int k){
	if(j >= 0){
		return i + somaSerie(i+k, --j, k);
	}else{
		return 0;
	}
}

int main(){
	printf("%i", somaSerie(0,5,1));
}
