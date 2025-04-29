#include <stdio.h>

int main(){
	
	int vet1[5], vet2[5], vetSoma[5];
	
	for(int i = 0; i <= 4; i++){
		printf("Digite o valor n%d: ",i + 1);
		scanf("%d",&vet1[i]);
		}
	printf("\n");
	for(int i = 0; i <= 4; i++){
		printf("Digite o valor n%d: ",i + 1);
		scanf("%d",&vet2[i]);
		}	
		
	for(int i = 0; i <= 4; i++){
		vetSoma[i] = vet1[i] + vet2[i];
	}
	printf("\n--------------------\n");
	printf("Vetor1: ");
	for(int j = 0; j <= 4; j++){
		printf("%d ", vet1[j]);
	}
	printf("\n--------------------\n");
	printf("Vetor2: ");
	for(int j = 0; j <= 4; j++){
		printf("%d ", vet2[j]);
	}
	printf("\n--------------------\n");
	printf(" Soma:  ");
	for(int j = 0; j <= 4; j++){
		printf("%d ", vetSoma[j]);
	}
	return 0;
}
