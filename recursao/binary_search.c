#include <stdio.h>

int binary_search(int array[], int i, int inicio, int fim){
	int meio = (inicio + fim) / 2;
	
		if (array[meio] == i) return meio;
		else if (array[meio] < i) return binary_search(array, i, meio + 1, fim);
		else if (array[meio] > i) return binary_search(array, i, inicio, meio - 1);
	
	return 0;
}

void main(){
	int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%d", binary_search(vetor, 10, 0, 9));
	
}
