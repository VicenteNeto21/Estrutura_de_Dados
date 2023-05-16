#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila{
	int n;
	int *dados;
	int primeiro;
	int ultimo;
	int size;
};

int create(int n) { 
	Fila *fila = (Fila *)malloc(sizeof(Fila));
	fila -> dados = (int * ) calloc(n, sizeof(int));
	fila->n = n;
	fila->primeiro = 0;
	fila->ultimo = -1;
	fila->size = 0; 
	printf("Instacia da fila criada em %d!\n", fila);
	return fila;

}

void add(Fila* fila, int v) {

	if(fila->ultimo == fila->n-1)
	fila->ultimo = -1;
	fila->ultimo++;
	fila->dados[fila->ultimo] = v; // incrementa ultimo e insere
	fila->size++; // mais um item inserido

}

int pop(Fila* fila ) { // pega o item do começo da fila

	int temp = fila->dados[fila->primeiro++]; // pega o valor e incrementa o primeiro

	if(fila->primeiro == fila->n)
		fila->primeiro = 0;

	fila->size--;  // um item retirado
	return temp;

}

int size(Fila* fila) { // retorna verdadeiro se a fila está vazia
	return fila->size;
}

//encontrando o primeiro elemento da fila
int first(Fila* fila) {
    printf("Primeiro elemento da fila: %d\n", fila->dados[fila->primeiro]);
    return fila->dados[fila->primeiro];
}
//encontrando o ultimo elemento da fila
int last(Fila* fila) {
    printf("Primeiro elemento da fila: %d\n", fila->dados[fila->ultimo]);
    return fila->dados[fila->ultimo];
}

int isEmpty(Fila* fila ) { // retorna verdadeiro se a fila está vazia
	return (fila->size==0);
}

int isFull(Fila* fila ) { // retorna verdadeiro se a fila está cheia

	return (fila->size == fila->n);
}
/*
void clear(Fila *f){
	fila->primeiro=0;
	fila ->ultimo=-1;
	fila ->size=0;
}
*/
void clear(Fila *fila){
	while(fila->size!=0){
		pop(fila);
	}
}
void printAll(Fila* fila){

	int cont, i;

	for ( cont=0, i= fila->primeiro; cont < fila->size; cont++){
		printf("%d\n",fila->dados[i++]);

		if (i == fila->n)
			i=0;

	}
	printf("\n\n");

}



