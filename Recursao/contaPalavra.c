#include <stdio.h>

int contaNumero(char k, char *n){
	if(*n != '\0'){
		if(k == *n){			
			return 1 + contaNumero(k, ++n);
		}else{
			return contaNumero(k, ++n);
		}
	}
}

int main(){
	char num[10] = "batata";
	char k = 't';

	printf("%i", contaNumero(k, num));
}
