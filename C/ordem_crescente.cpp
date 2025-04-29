#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    int numeros[5];
    int i, j, temp;

    // Solicita ao usu�rio para entrar com 5 n�meros
    printf("Digite 5 n�meros:\n");
    for(i = 0; i < 5; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Ordena��o dos n�meros em ordem crescente (algoritmo de ordena��o por bolha)
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

    // Imprime os n�meros ordenados
    printf("\nOs n�meros em ordem crescente s�o:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

/*  Entrada de dados: O programa solicita que o usu�rio entre com 5 n�meros inteiros, que s�o armazenados em um array chamado numeros.
    Ordena��o: O algoritmo de ordena��o usado � o bubble sort. Ele compara cada n�mero com o seguinte, trocando-os de lugar se estiverem na ordem errada (maior antes do menor).
    Exibi��o dos resultados: Ap�s ordenar, o programa imprime os n�meros em ordem crescente.

	Como funciona a ordena��o (bubble sort):

    Em cada itera��o, o programa compara elementos adjacentes e os troca se estiverem fora de ordem.
    Ele repete esse processo at� que toda a lista esteja ordenada.
	*/
