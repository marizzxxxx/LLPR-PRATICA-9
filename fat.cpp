#include <stdio.h>

int fibonacci(int n);

int main(){
	int num, r;
	scanf("%d", &num);
	
	r = fatorial(num);
	if(r == -1){
		printf("Entrada invalida");
	} else {
		printf("%d", fatorial(num));
	}
}

int fatorial(int n){
	if (n == 0){
		return 1;
	}
	if (n > 0){
		return n * fatorial(n-1);
	}
	return -1;
}

