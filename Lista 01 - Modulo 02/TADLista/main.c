#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    // criando a lista
    Lista* lista = create(5);
    
    // adicionando elementos � lista
    add(lista, 5);
    add(lista, 10);
    add(lista, 15);
    add(lista, 20);
    add(lista, 25);
    
    // imprimindo os elementos da lista ap�s a adi��o
    printf("Elementos da lista ap�s a add:\n");
    printAll(lista);
    
    // verificando o tamanho da lista
    printf("Tamanho da lista: %d\n", size(lista));
    
    // procurando um elemento com find
    printf("O elemento 15 esta em: %d\n", find(lista, 15));
    
    // verificando se a lista est� cheia
    isFull(lista);
    
    // removendo o elemento de �ndice 2
    removeElement(lista, 2);
    
    // imprimindo os elementos da lista ap�s a remo��o
    printf("Elementos da lista apos a remo��o:\n");
    printAll(lista);
    
    // verificando o tamanho da lista ap�s a remo��o
    printf("Tamanho da lista ap�s a remocao: %d\n", size(lista));
    
    //clear
    clear(lista);
        
    // liberando a mem�ria alocada para a lista
    free(lista);
    
    return 0;
}

