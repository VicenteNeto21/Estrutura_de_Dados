#include <stdio.h>
#include "arvoreBinaria.h"

int main() {
    Arvore* arvore = criarArvore();

    inserir(arvore, 17);
    inserir(arvore, 99);
    inserir(arvore, 13);
    inserir(arvore, 1);
    inserir(arvore, 3);
    inserir(arvore, 100);
    inserir(arvore, 150);
    inserir(arvore, 400);

    imprimirPreOrdem(arvore);
    imprimirEmOrdem(arvore);
    imprimirPosOrdem(arvore);

   No* noEncontrado = buscar(arvore, 13);
    if (noEncontrado != NULL) {
        printf("No encontrado: %d\n", noEncontrado->valor);
    } else {
        printf("No não encontrado.\n");
    }

    liberarArvore(arvore);

    return 0;
}

