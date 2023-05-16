typedef struct fila Fila;

int create(int n);
void add(Fila *fila, int v);
int pop(Fila *fila );
int size(Fila *fila);
int find(Fila* fila, int v);
int first(Fila *fila);
int last(Fila* fila);
int isEmpty(Fila *fila); 
int isFull(Fila *fila ); 
void clear(Fila *fila);
void printAll(Fila *fila);
