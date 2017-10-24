#include <stdio.h>

double inverterVetor(double *vet, int i) { 
	
	if(i <99) {
		vet[99-i] = inverterVetor(vet, i+=1);  
		// vet[i] = inverterVetor(vet, 99-(i+=1));  
		return *(vet + i);
	}

	return *(vet+99-i);
}

int main() {
	double vet[100], help;
	int i;
	for(i = 0; i < 100; i++) { 
		scanf("%lf", &vet[i]);
	}
	
	// for(i =0; i < 50; i++) { 
	// 	help = vet[99-i];
	// 	vet[99-i] = vet[i];
	// 	vet[i] = help;
	// }
	double asd = inverterVetor(vet, 0);
	for(i = 0; i < 100; i++) { 
		if(i%10 == 0 && i != 0) {
			printf("\n");
		}
		printf("%.0lf ", vet[i]);
	}

	printf("\n");
	return 0;
}