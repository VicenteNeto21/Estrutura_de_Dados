#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct {
    int codigo;
    float valor;
} Produto;

void insertionSort(Produto arr[], int n);
void selectionSort(Produto arr[], int n);
void bubbleSort(Produto arr[], int n);
void mergeSort(Produto arr[], int inicio, int fim);
void quickSort(Produto arr[], int baixo, int alto);

#endif

