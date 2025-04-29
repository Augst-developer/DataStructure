#include <stdio.h>

int main(){
	
	int vet[5];
	
	for(int i = 0; i <= 4; i++){
		printf("Digite um valor: ");
		scanf("%d",&vet[i]);
		
	}
	for(int j = 0; j <= 4; j++){
		printf("\nOs valores digitados: %d", vet[j]);
	}
}
