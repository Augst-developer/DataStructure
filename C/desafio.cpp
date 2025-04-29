#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	
    char palavra[91];
    int total_letras[256] = {0};  // Inicializando com 0
    int i, posicao;
    
    printf("Entre com a sua palavra: ");
    fgets(palavra, 91, stdin);
    
    palavra[strcspn(palavra, "\n")] = 0;  // Remove a quebra de linha, se houver
    
    printf("Sua palavra é %s\n", palavra);
    
    // Totalizar letras
    for(i = 0; i < strlen(palavra); i++) {
        posicao = palavra[i];
        total_letras[posicao]++;
    }
    
    // Saída
    for(i = 0; i < 256; i++) {
        if(total_letras[i] != 0) {
            if(i == 32) {
                printf("Branco (Espaço) = %d\n", total_letras[i]);
            } else {
                printf("Letra %c = %d\n", i, total_letras[i]);
            }
        }
    }
    printf("\nTotal de caracteres: %d", strlen(palavra));
    return 0;
}
