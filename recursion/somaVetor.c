#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *vet, int tamanho, int iterator){
	if(iterator ==  tamanho){	
		return 0;
	}else{
		return vet[iterator] + somaVetor(vet, tamanho, ++iterator);
	}
}


int main(){
	int n = 2;
	int *vetor = (int*)calloc(n, sizeof(int));
	int i;

	for(i = 0; i < n; i++){
		scanf("%i", &vetor[i]);
	}

	printf("\nA soma desses números é:\n");


	
	printf("%i", somaVetor(vetor, n, 0)); 
}
