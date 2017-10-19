#include <stdio.h>

int mdc(int x, int y){
	if(y == 0){
		return x;
	}else{
		return mdc(y, x%y);
	}	
}

int main(){
	int x = 8, y = 10;

	printf("%d", mdc(x, y));
}
