#include <stdio.h>

#define LINHA 10  // Número de linhas da matriz
#define COLUNA 10 // Número de colunas da matriz

int main() {
    int matriz[LINHA][COLUNA]; // Declara a matriz
    int target = 15;            // Valor a ser procurado
    int found = 0;             // Flag para verificar se o valor foi encontrado
    int soma = 1;              // Valor inicial para preencher a matriz

    // Preenche a matriz com valores de 1 a 25
    printf("Matriz preenchida:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%2d ", matriz[i][j]); // Exibe os valores da matriz
        }
        printf("\n");
    }

    // Procura o valor alvo na matriz
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("\nValor %d encontrado no índice (%d, %d)\n", target, i, j);
                found = 1;
                break; // Sai do loop interno
            }
        }
        if (found) break; // Sai do loop externo se o valor foi encontrado
    }

    // Caso o valor não tenha sido encontrado
    if (!found) {
        printf("\nValor %d não encontrado na matriz.\n", target);
    }

    return 0;
}