#include <stdio.h>

int main(){
	int c = 10;
	int * p;
	int * j;
	int a = 5;
	p = &c;
	j = &a;
	printf("Endereco da memoria: %d",p);
	printf("\nEndereco da memoria2: %d",j);
	
}
