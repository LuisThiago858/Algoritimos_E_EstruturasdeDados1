#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

typedef struct Fila{
    Node *frente;
    Node *tras;
    int tamanho;
} Fila;

// Cria uma nova fila vazia
Fila *createFila(){
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    fila->frente = fila->tras = NULL;
    fila->tamanho = 0;
    return fila;
}

// Adiciona um elemento na fila
void enfileirar(Fila *fila, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (fila->tras == NULL)
    {
        fila->frente = fila->tras = newNode;
        return;
    }
    fila->tras->next = newNode;
    fila->tras = newNode;
    fila->tamanho++;
}

// Remove um elemento da fila
int desenfileirar(Fila *fila){
    if (fila->frente == NULL)
    {
        return -1;
    }
    Node *temp = fila->frente;
    int data = temp->data;
    fila->frente = fila->frente->next;
    if (fila->frente == NULL)
    {
        fila->tras = NULL;
    }
    free(temp);
    fila->tamanho--;
    return data;
}

// Verifica se a fila está vazia
int isEmpty(Fila *fila){
    return fila->frente == NULL;
}
// Retorna o tamanho da fila
int tamanho(Fila *fila){
    return fila->tamanho;
}
void imprimir(Fila *fila){
    Node *atual;
    for (atual = fila->frente; atual != NULL; atual = atual->next)
    {
        if(atual==NULL){
            printf("\nfila vazia\n");
        }
        printf("%d ", atual->data);
    }
    printf("\n");
}

int main(){
    Fila *fila = createFila();

    enfileirar(fila, 10);
    enfileirar(fila, 20);;
    imprimir(fila);
    printf("%d desenfileirado da fila\n", desenfileirar(fila));
    printf("%d desenfileirado da fila\n", desenfileirar(fila));
    printf("%d desenfileirado da fila\n", desenfileirar(fila));
    return 0;
}
