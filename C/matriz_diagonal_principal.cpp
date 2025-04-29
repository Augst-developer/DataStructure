#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int linhas, colunas, i, j;
	
	printf("Digite o número de linhas da matriz: ");
	scanf("%d",&linhas);
	printf("Digite o número de colunas da matriz: ");
	scanf("%d",&colunas);
	
	if (linhas != colunas){
		printf("Erro!!! Matriz definida não é quadrada!!");
		return 0;
	}
	
	int matrizA[linhas][colunas], soma=0;
	
	printf("Digite os elementos da matriz A:\n");
	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("Digite: ");
			scanf("%d",&matrizA[i][j]);	
		}
	}
	
	printf("\n");	
	//soma valores da diagonal principal	
	for (i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			printf("%d \t", matrizA[i][j]);
			if(i == j) // se posicao de linha for igual coluna
				soma += matrizA[i][j];
		}
		printf("\n");
	}
	printf("\nA soma dos elementos da diagonal secundária = %d.", soma);
	
}
