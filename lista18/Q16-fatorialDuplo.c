#include <stdio.h>
/*
*A função fatorial duplo é definida como o produto de todos os números *naturais ímpares de 1 até algum número natural ímpar N.
*Assim, o fatorial duplo de 5 é 5!! = 1 * 3 * 5 = 15
*Faça uma função recursiva que receba um número inteiro positivo impar *N e retorne o fatorial duplo desse número.
*
*/
int fatorialDuplo(int n) {
	if(n>=1 && n%2 !=0) {
		return n*fatorialDuplo(n-1);
	}else if(n>=1 && n%2 ==0) {
		return fatorialDuplo(n-1);
	}
	return 1;
}

int main() { 
	int n;
	scanf("%d", &n);
	printf("%d\n", fatorialDuplo(n));
	return 0;
}
