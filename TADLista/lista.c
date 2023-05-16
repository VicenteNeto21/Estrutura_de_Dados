#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    int n;
    int *data;
    int size;
};

Lista* create(int n) {
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    lista->data = (int*)calloc(n, sizeof(int));
    lista->n = n;
    lista->size = 0;
    printf("Lista criada na instancia: %p!\n", lista);
    return lista;
}

int add(Lista* lista, int v) {
    if (lista->size < lista->n) {
        lista->data[lista->size] = v;
        lista->size++;
        printf("Elemento %d adicionado na lista.\n", v);
        return 1;
    } else {
        printf("Erro: a lista esta cheia!\n");
        return 0;
    }
}

int removeElement(Lista* lista, int index) {
    if (index >= 0 && index < lista->size) {
        int removed = lista->data[index];
        int i;
        for (i = index; i < lista->size - 1; i++) {
            lista->data[i] = lista->data[i + 1];
        }
        lista->size--;
        printf("Elemento %d removido da lista.\n", removed);
        return 1; // remoção bem-sucedida
    } else {
        printf("Erro: índice invalido!\n");
        return 0; // remoção mal-sucedida
    }
}

int size(Lista* lista) {
    return lista->size;
}

int find(Lista* lista, int v) {
    int i;
    for (i = 0; i < lista->size; i++) {
        if (lista->data[i] == v) {
            return i; // retorna o índice do elemento encontrado
        }
    }
    return -1; // retorna -1 se o elemento não for encontrado
}

int isFull(Lista* lista) {
    if (lista->size == lista->n) {
        printf("A lista esta cheia.\n");
        return 1;
    } else {
        printf("A lista não esta cheia.\n");
        return 0;
    }
}

int isEmpty(Lista* lista) {
    if (lista->size == 0) {
        printf("A lista esta vazia.\n");
        return 1;
    } else {
        printf("A lista não esta vazia.\n");
        return 0;
    }
}

void clear(Lista* lista){
	lista -> size =0;
	printf("Lista foi limpa.\n");
}

void printAll(Lista* lista) {
    int i;
    for (i = 0; i < lista->size; i++) {
        printf("%d\n", lista->data[i]);
    }
    printf("\n\n");
}

