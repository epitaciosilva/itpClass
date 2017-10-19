#include <stdio.h>
#include <stdlib.h>

int inverteVetor(int *vet, int esquerdo, int direito){	
	int temp;

	if(direito > esquerdo){
		temp = vet[esquerdo];
		vet[esquerdo] = vet[direito];
		vet[direito] = temp;

		return inverteVetor(vet, ++esquerdo, --direito);
	}
}

int main(){
	int array[100];
	int i;

	for(i = 0; i < 100; i++){
		array[i] = i;
	}
	
	inverteVetor(array, 0, 99);

	for(i = 0; i < 100; i++){
		printf("%d\n", array[i]);
	}
}
