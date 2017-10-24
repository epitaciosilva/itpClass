#include <stdio.h>

double inverterVetor(double *vet, int i) { 
	if(i < 50 && i > 0) {
		vet[49-i] = inverterVetor(vet, i+=1);
	}else if(i < 0) {
		vet[modulo(i)] = inverterVetor(vet, i-=1);
	}

	return *(vet+49+i);
}

int modulo(int i) {
	if(i < 0) {
		return -i;
	}

	return i;
}

int main() {
	int i;
	double vet[100];

	for(i =0; i<100; i++) {
		scanf("%lf", &vet[i]);
	}
	double vet2 = inverterVetor(vet, 0);
	for(i = 0; i < 100; i++) { 
		printf("%.0lf ", *(vet+i));
		if(i%9 == 0  && i !=0) {
			printf("\n");
		}
	} 

	return 0;
}