#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

int valores[5];
float soma1, soma2, result;

for(int i = 0; i <= 4; i++){
		printf("Digite o valor n%d: ",i + 1);
		scanf("%d",&valores[i]);
		}
		
	soma1 = valores[0] + valores[4];
	
	soma2 = valores[1] + valores[2] + valores[3];
	
	if(soma1 != 0){
		result = soma2/soma1;
		
		printf("\nSoma 1: %.2f", soma1);
	
		printf("\nSoma 2: %.2f", soma2);

		printf("\nO resultado da divisão %.2f", result);
		
	}else{
		printf("\nNão é possível dividir por zero!");
	}
	return 0;
}
