#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    // criando a lista
    Lista* lista = create(5);
    
    // adicionando elementos à lista
    add(lista, 5);
    add(lista, 10);
    add(lista, 15);
    add(lista, 20);
    add(lista, 25);
    
    // imprimindo os elementos da lista após a adição
    printf("Elementos da lista após a add:\n");
    printAll(lista);
    
    // verificando o tamanho da lista
    printf("Tamanho da lista: %d\n", size(lista));
    
    // procurando um elemento com find
    printf("O elemento 15 esta em: %d\n", find(lista, 15));
    
    // verificando se a lista está cheia
    isFull(lista);
    
    // removendo o elemento de índice 2
    removeElement(lista, 2);
    
    // imprimindo os elementos da lista após a remoção
    printf("Elementos da lista apos a remoção:\n");
    printAll(lista);
    
    // verificando o tamanho da lista após a remoção
    printf("Tamanho da lista após a remocao: %d\n", size(lista));
    
    //clear
    clear(lista);
        
    // liberando a memória alocada para a lista
    free(lista);
    
    return 0;
}

