#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
	
	Fila * fila = create(5);
	//adiciona elementos na fila
	add(fila, 10);
	add(fila, 20);
	add(fila, 30);
	
	//Imprimi os elementos da fila após o add
	printAll(fila);
	
	//Imprimi o primeiro elemento da fila
	first(fila);
	
	//Imprimi o primeiro elemento da fila
	last(fila);
	
	//remove o primeiro elemento da fila
	pop(fila);
	//Verifica o tamanho da fila
	printf("A fila tem %d elmentos!\n",size(fila));
	//Verifica se a fila está cheia
	if(isFull(fila)){
		printf("Fila Cheia!\n");
	}else{
		printf("Fila nao Cheia!\n");
	}
	clear(fila);
	//Verifica se a fila está vazia
	if(isEmpty(fila)){
		printf("Fila Vazia!\n");
	}else{
		printf("Fila não Vazia!\n");
	}
	//Imprimi os elementos da fila
	printAll(fila);
	return 0;
}
