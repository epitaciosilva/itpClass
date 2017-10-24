#include <stdio.h>

int mdc(int x, int y, int i) {
	if(y == 0) {
		return x;
	}
	return mdc(y, x%y, i);

	i+=1;
	if(x%i==0 && y%i == 0) {
		return i;
	}
}


int main() { 
	int x, y, i;
	scanf("%d", &x);
	scanf("%d", &y);


	//Ḿétodo normal
	int menor = (x <= y) ? x : y;
	int mdc = 0;
	for(i = 1; i < menor; i++) { 
		if(x%i == 0 && y%i ==0) {
			mdc = i;
		}
	}

	printf("%d\n", mdc);
	return 0;
}