#include <stdio.h>
#include <stdlib.h>
#include "product.h"

int main() {

    int n, i;

    printf("Digite o numero de produtos: ");
    scanf("%d", &n);

    Produto produtos[n];

    for (i = 0; i < n; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &produtos[i].codigo);
        printf("Digite o valor do produto %.2f: ", i + 1);
        scanf("%f", &produtos[i].valor);
    }

    // Ordenando o vetor de produtos usando os diferentes algoritmos de ordenação
    //insertionSort(produtos, n);
    //selectionSort(produtos, n);
    //bubbleSort(produtos, n);
    //mergeSort(produtos, 0, n - 1);
    quickSort(produtos, 0, n - 1);

    printf("\nProdutos ordenados por codigo:\n");
    for (i = 0; i < n; i++) {
        printf("Produto %d - Código: %d, Valor: %.2f\n", i + 1, produtos[i].codigo, produtos[i].valor);
    }

    return 0;
}

