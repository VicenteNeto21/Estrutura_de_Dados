#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
	
	//criado a pilha
    Pilha* pilha = create(5);
    add(pilha, 1);
    add(pilha, 2);
    add(pilha, 3);
    add(pilha, 4);
    add(pilha, 5);
    
    //verificando o tamanho da pilha
    printf("Tamanho da pilha: %d\n", size(pilha));
    
    //verificando o primeiro elemento da pilha
    printf("pilha top: %d\n", top(pilha));
    
    //verificando o ultimo elemento da pilha
    printf("pilha bottom: %d\n", bottom(pilha));
    
    //verificando se a pilha esta cheia
    printf("pilha isFull: %d\n", isFull(pilha));
    
    //Procurando um elemento da pilha e retornado
    printf("pilha find 2: %d\n", find(pilha, 2)); //aqui o numero esta iniciado em zero, por isso que numero 2 esta posição 1.
    
    //removendo topo da pilha
    pop(pilha);
    
    //Verificando se pilha esta vazia
    printf("pilha isEmpty: %d\n", isEmpty(pilha));
    
    //verificando o tamanho da pilha depois de remover
    printf("Tamanho da pilha apos pop: %d\n", size(pilha));
    
    //removendo todos os elementos da pilha
    clear(pilha);
    
    printf("Tamanho da pilha depois de clear: %d\n", size(pilha));
    
    //limpando a memoria
    free(pilha);
    return 0;
}

