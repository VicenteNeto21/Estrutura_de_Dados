typedef struct pilha Pilha;

    Pilha * create(int n);
    int add(Pilha * pilha, int e);
    int isFull(Pilha * pilha);
    int isEmpty(Pilha * pilha);
    int pop(Pilha * pilha);
    int size(Pilha * pilha);
    int top(Pilha * pilha);
    int bottom(Pilha * pilha);
    int find(Pilha * pilha, int e);
    void clear(Pilha * pilha);

