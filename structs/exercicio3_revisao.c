#include <stdio.h>
#include <conio.h>

typedef struct{
	char nome[30];
	int componentes;
	float valor_projeto;
	float valor_estimado_final;
	float valorizacao;
} equipe;

int main(){
	int i, grupos = 2;
	equipe equipes[grupos];
	for (i = 0; i<grupos; i++){
		printf("Nome do grupo:\n");
		scanf("%s", equipes[i].nome);
		printf("Numero de componentes:\n");
		scanf("%d", &equipes[i].componentes);
		printf("Valor do projeto:\n");
		scanf("%f", &equipes[i].valor_projeto);
		printf("Valor estimado final:\n");
		scanf("%f", &equipes[i].valor_estimado_final);
		printf("Valorizacao esperada:\n");
		scanf("%f", &equipes[i].valorizacao);
	}
	for (i = 0; i<grupos; i++){
		printf("########### EQUIPE #############\n");
		printf("%s\n", equipes[i].nome);
		printf("%d\n", equipes[i].componentes);
		printf("%f\n", equipes[i].valor_projeto);
		printf("%f\n", equipes[i].valor_estimado_final);
		printf("%f\n", equipes[i].valorizacao);
	}
}
