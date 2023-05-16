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
	
	// procurando um elemento com find
    printf("O elemento 10 esta em: %d\n", find(fila, 10));
	
	//remove o primeiro elemento da fila
	printf("elemento removido da fila: %d\n", pop(fila));
	
	// verificando se a lista esta cheia
    isFull(fila);
	
	//Verifica o tamanho da fila
	printf("A fila tem %d elementos!\n",size(fila));
	
	//Imprimi os elementos da fila
	printAll(fila);
	
	//Verifica se a fila está vazia
	isEmpty(fila);
	
	//Limpando a fila	
	clear(fila);
	
	//liberando memoria
	
	free(fila);
	return 0;
}
