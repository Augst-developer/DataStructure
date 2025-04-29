#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int linhas1, colunas1, linhas2, colunas2, i, j;
	
	printf("Digite o número de linhas da matriz1: ");
	scanf("%d",&linhas1);
	printf("Digite o número de colunas da matriz1: ");
	scanf("%d",&colunas1);
	
	printf("Digite o número de linhas da matriz1: ");
	scanf("%d",&linhas2);
	printf("Digite o número de colunas da matriz1: ");
	scanf("%d",&colunas2);
	
	
	
	int matrizA[linhas1][colunas1];
	int matrizB[linhas2][colunas2];
	int matrizC[linhas][colunas];
	
	printf("Digite os elementos da matriz A:\n");
	for(i = 0; i < linhas1; i++){
		for(j = 0; j < colunas1; j++){
			printf("Digite: ");
			scanf("%d",&matrizA[i][j]);	
		}
	}
	printf("Digite os elementos da matriz B:\n");
	for(i = 0; i < linhas2; i++){
		for(j = 0; j < colunas2; j++){
			printf("Digite: ");
			scanf("%d",&matrizB[i][j]);	
		}
		
	
	for(i = 0; i < linhas2; i++){
		for(j = 0; j < colunas2; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];	
		}
	}
		
	for (i = 0; i < linhas2; i++){
		for(j = 0; j < colunas2; j++){
			printf("%d \t", matrizC[i][j]);		
		}
	}
	
}
