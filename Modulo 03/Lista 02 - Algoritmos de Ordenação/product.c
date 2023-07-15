#include "product.h"


void trocar(Produto *a, Produto *b) {
    Produto temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(Produto arr[], int n) {
    int i, j;
    for (i = 1; i < n; i++) {
        Produto chave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j].codigo > chave.codigo) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

void selectionSort(Produto arr[], int n) {
    int i, j, indiceMin;
    for (i = 0; i < n - 1; i++) {
        indiceMin = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].codigo < arr[indiceMin].codigo) {
                indiceMin = j;
            }
        }
        trocar(&arr[indiceMin], &arr[i]);
    }
}

void bubbleSort(Produto arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].codigo > arr[j + 1].codigo) {
                trocar(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void merge(Produto arr[], int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Produto L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[meio + 1 + j];

    i = 0;
    j = 0;
    k = inicio;

    while (i < n1 && j < n2) {
        if (L[i].codigo <= R[j].codigo) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Produto arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio + 1, fim);

        merge(arr, inicio, meio, fim);
    }
}

int partition(Produto arr[], int baixo, int alto) {
    int pivo = arr[alto].codigo;
    int i = (baixo - 1);
    int j;
    for (j = baixo; j <= alto - 1; j++) {
        if (arr[j].codigo < pivo) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(Produto arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = partition(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

