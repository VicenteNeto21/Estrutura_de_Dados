#include <stdio.h>
#include <stdlib.h>'
#include "pilha.h"

struct pilha {
    int* data;
    int n;
    int top;
    int size;
};

//Criado uma pilha
Pilha* create(int n) {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->data = (int*)calloc(n, sizeof(int));
    pilha->n = n;
    pilha->top = -1; // Define o topo da pilha como -1 (pilha vazia)
    printf("Instancia de Pilha criada em %p!\n\n", pilha);
    return pilha;
}

//adicionado elemento na pilha
int add(Pilha* pilha, int e) {
    if (pilha->top < pilha->n - 1) { // Verifica se a pilha nao esta cheia
        pilha->top++;
        pilha->data[pilha->top] = e;
        printf("Elemento %i adicionado no topo da pilha.\n", e);
        return 1;
    }
    return 0;
}

// removendo elemento na pilha
int pop(Pilha* pilha) {
    if (isEmpty(pilha)) { // Verifica se a pilha est? vazia
        return 0;
    }
    pilha->top--;
    printf("Elemento %i removido do topo da pilha.\n", pilha->data[pilha->top + 1]);
    return 1;
}

// Tamanho que fila esta
int size(Pilha* pilha) {
    return pilha->top + 1; // O tamanho da pilha ? igual ao topo mais um
}

//Verificando o primeiro elemento da pilha
int top(Pilha* pilha) {
    if (isEmpty(pilha)) { // Verifica se a pilha est? vazia
        return -1;
    }
    return pilha->data[pilha->top];
}

//Verificando o ultimo elemento da pilha

int bottom(Pilha* pilha) {
    if (isEmpty(pilha)) { // Verifica se a pilha est? vazia
        return -1;
    }
    return pilha->data[0];
}

//Procurando elemento

int find(Pilha* pilha, int e) {
	int i;
    for (i = 0; i < pilha->size; i++) {
        if (pilha->data[i] == e) {
            return i;
        }
    }
    // elemento nao encontrado
    return -1;
}


int isFull(Pilha* pilha) {
    return pilha->top == pilha->n - 1;
}

int isEmpty(Pilha* pilha) {
    return pilha->top == -1;
    printf("Pilha vazia\n");
}

//imprime todos os elementos inseridos até então na respectiva instância
void printAll(Pilha* pilha) {
	int i;
    for (i = pilha->top; i >= 0; i--) {
		printf("%d\n", pilha->data[i]);
	}
	printf("\n");
	printf("Elementos da pilha:\n");
}

void clear(Pilha* pilha) {
    pilha->top = -1; // Define o topo como -1 (pilha vazia)
    printf("Pilha limpa!\n");
}

