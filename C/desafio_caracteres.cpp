#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 90
#define ASCII_SIZE 128

// Função para contar os caracteres diferentes
void contarCaracteres(char str[]) {
    int contador[ASCII_SIZE] = {0}; // Vetor para contar as ocorrências de cada caractere
    int totalDiferentes = 0; // Variável para armazenar o total de caracteres diferentes

    // Percorre a string e atualiza a contagem no vetor
    for (int i = 0; i < strlen(str); i++) {
        if (contador[(int)str[i]] == 0) {
            totalDiferentes++; // Incrementa o total de caracteres diferentes
        }
        contador[(int)str[i]]++; // Incrementa a contagem no índice correspondente ao caractere
    }

    // Exibe o resumo da contagem de caracteres
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
    char str[MAX_LENGTH + 1]; // String para armazenar até 90 caracteres (1 extra para o '\0')

    // Captura a string do usuário
    printf("Digite uma string com até 90 caracteres: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere '\n' se presente
    str[strcspn(str, "\n")] = '\0';

    // Chama a função para contar os caracteres
    contarCaracteres(str);

    return 0;
}

