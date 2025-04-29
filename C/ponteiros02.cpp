#include<stdio.h>

int main(){
	int c = 10, *p;
	
	p = &c;
	printf("Conteudo apontado por p: %d\n", *p);
	
	*p = 12;
	printf("Conteudo apontado por p: %d \n", *p);
	printf("Conteudo da variavel c: %d \n", c);
}
