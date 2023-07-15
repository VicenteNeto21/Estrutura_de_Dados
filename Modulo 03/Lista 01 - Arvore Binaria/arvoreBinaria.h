typedef struct no {
    int valor;
    struct no* esquerda;
    struct no* direita;
} No;

typedef struct arvore {
    No* raiz;
} Arvore;

Arvore* criarArvore();
void inserir(Arvore* arvore, int valor);
No* buscar(Arvore* arvore, int valor);
void imprimirEmOrdem(Arvore* arvore);
void imprimirPreOrdem(Arvore* arvore);
void imprimirPosOrdem(Arvore* arvore);
void liberarArvore(Arvore* arvore);
void limparArvore(Arvore* arvore);

