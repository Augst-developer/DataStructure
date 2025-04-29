#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[5];
    int i, j, temp;

    // Solicita ao usuário para entrar com 5 números
    printf("Digite 5 números:\n");
    for(i = 0; i < 5; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Ordenação dos números em ordem crescente (algoritmo de ordenação por bolha)
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if(numeros[i] > numeros[j]) {
                // Troca os valores
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    // Imprime os números ordenados
    printf("\nOs números em ordem crescente são:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

/*  Entrada de dados: O programa solicita que o usuário entre com 5 números inteiros, que são armazenados em um array chamado numeros.
    Ordenação: O algoritmo de ordenação usado é o bubble sort. Ele compara cada número com o seguinte, trocando-os de lugar se estiverem na ordem errada (maior antes do menor).
    Exibição dos resultados: Após ordenar, o programa imprime os números em ordem crescente.

	Como funciona a ordenação (bubble sort):

    Em cada iteração, o programa compara elementos adjacentes e os troca se estiverem fora de ordem.
    Ele repete esse processo até que toda a lista esteja ordenada.
	*/
