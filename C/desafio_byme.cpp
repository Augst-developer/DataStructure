#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX_LENGTH 90
#define ASCII_SIZE 128

void contarCaracteres(char str[]) {
    int contador[ASCII_SIZE] = {0}; // Vetor para contar as ocorrências de cada caractere
    int totalDiferentes = 0; // Variável para armazenar o total de caracteres diferentes

        for (int i = 0; i < strlen(str); i++) {
        if (contador[(int)str[i]] == 0) {
            totalDiferentes++; 
        }
        contador[(int)str[i]]++; // Incrementa a contagem no índice correspondente ao caractere
    }

    printf("\nResumo da contagem de caracteres:\n");
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (contador[i] > 0) {
            printf("Caractere '%c' (ASCII %d): %d vez(es)\n", (char)i, i, contador[i]);
        }
    }

    // Exibe o total de caracteres diferentes
    printf("\nTotal de caracteres diferentes: %d\n", totalDiferentes);
}

int main() {
	setlocale(LC_ALL,"portuguese");
    char str[MAX_LENGTH + 1];

    // Captura a string do usuário
    printf("Digite uma string com até 90 caracteres: ");
    fgets(str, sizeof(str), stdin);


    // Chama a função para contar os caracteres
    contarCaracteres(str);

    return 0;
}
