#include <stdio.h>

int somaVetor(int vet[], int tam, int i) {

	if(i < tam) {
		return vet[i] + somaVetor(vet, tam, i+=1);
	}

	return 0;
}

int main() {
	int vet[10], i;
	int tam = sizeof(vet)/sizeof(int);
	
	for(i =0; i<tam; i++) {
		scanf("%d", &vet[i]);
	}
	
	printf("%d\n", somaVetor(vet, tam, 0));
	return 0;
}