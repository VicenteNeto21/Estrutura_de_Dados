#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

Arvore* criarArvore() {
    Arvore* novaArvore = (Arvore*)malloc(sizeof(Arvore));
    novaArvore->raiz = NULL;
    return novaArvore;
}

void inserirRecursivo(No** no, int valor) {
    if (*no == NULL) {
        *no = criarNo(valor);
    } else if (valor < (*no)->valor) {
        inserirRecursivo(&((*no)->esquerda), valor);
    } else if (valor > (*no)->valor) {
        inserirRecursivo(&((*no)->direita), valor);
    }
}

void inserir(Arvore* arvore, int valor) {
    inserirRecursivo(&(arvore->raiz), valor);
}

No* buscarRecursivo(No* no, int valor) {
    if (no == NULL || no->valor == valor) {
        return no;
    }

    if (valor < no->valor) {
        return buscarRecursivo(no->esquerda, valor);
    } else {
        return buscarRecursivo(no->direita, valor);
    }
}

No* buscar(Arvore* arvore, int valor) {
    return buscarRecursivo(arvore->raiz, valor);
}

void imprimirEmOrdemRecursivo(No* no) {
    if (no != NULL) {
        imprimirEmOrdemRecursivo(no->esquerda);
        printf("%d ", no->valor);
        imprimirEmOrdemRecursivo(no->direita);
    }
}

void imprimirEmOrdem(Arvore* arvore) {
    printf("Imprimindo em ordem: ");
    imprimirEmOrdemRecursivo(arvore->raiz);
    printf("\n");
}

void imprimirPreOrdemRecursivo(No* no) {
    if (no != NULL) {
        printf("%d ", no->valor);
        imprimirPreOrdemRecursivo(no->esquerda);
        imprimirPreOrdemRecursivo(no->direita);
    }
}

void imprimirPreOrdem(Arvore* arvore) {
    printf("Imprimindo em pré-ordem: ");
    imprimirPreOrdemRecursivo(arvore->raiz);
    printf("\n");
}

void imprimirPosOrdemRecursivo(No* no) {
    if (no != NULL) {
        imprimirPosOrdemRecursivo(no->esquerda);
        imprimirPosOrdemRecursivo(no->direita);
        printf("%d ", no->valor);
    }
}

void imprimirPosOrdem(Arvore* arvore) {
    printf("Imprimindo em pós-ordem: ");
    imprimirPosOrdemRecursivo(arvore->raiz);
    printf("\n");
}

void liberarArvoreRecursivo(No* no) {
    if (no != NULL) {
        liberarArvoreRecursivo(no->esquerda);
        liberarArvoreRecursivo(no->direita);
        free(no);
    }
}

void liberarArvore(Arvore* arvore) {
    liberarArvoreRecursivo(arvore->raiz);
    free(arvore);
}

void limparArvore(Arvore* arvore) {
    liberarArvore(arvore);
}

