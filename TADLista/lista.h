typedef struct lista Lista;

Lista* create(int n);
int add(Lista* lista, int v);
int removeElement(Lista* lista, int index);
int size(Lista* lista);
int find(Lista* lista, int v);
int isFull(Lista* lista);
int isEmpty(Lista* lista);
void clear(Lista* lista);
void printAll(Lista* lista);
