#include <stdio.h>

int somatorio(int n){
	if (n == 1){
		return 1;
	}
	return n + somatorio(n - 1);
}

int fatorial(int n){
	if (n == 1){
		return 1;
	}
	return n * fatorial(n - 1);
}

void main(){
	printf("%d", somatorio(10));
	
}
