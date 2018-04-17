// Codigo de insertion sort com busca binaria para encontrar um numero

#include <stdio.h>

void insertion_sort(int vetor[], int tamanho){
	int j, i, atual;
	for (i = 1; i < tamanho; i++)
	{
		atual = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (atual < vetor[j])){
			vetor[j + 1] = vetor[j];
			j = j - 1;
		}
		
	vetor[j + 1] = atual;
	}
}

void main(){
	int vetor[10] = {0,3,3,4,5,6,7,12,25,20};
	int achei = 0, inicio = 0, fim = 9, meio, busca, i;
	printf("Ola! Tenho um vetor de 10 elementos. Digite um numero para ver se ele esta no vetr");
	scanf("%d", &busca);
	printf("\n\n\n");
	insertion_sort(vetor, 10);
	
	for (i = 0; i<10; i++){
		printf("%d", vetor[i]);
	}
	printf("\n\n\n");
	while (inicio <= fim && !achei){
		meio = (inicio + fim) / 2;
		
		if (busca  == vetor[meio]){
			achei = 1;
		} else {
			if (busca < vetor[meio]){
				fim = meio - 1;
			}
			else{
				inicio = meio + 1;
			}
		}
	}
	
	if (achei){
		printf("Achei");
		printf("Meio %d", meio);
	}
	
	
}
