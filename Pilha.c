#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int data;
    struct no *prox;
} No;

No *remover, *topo = NULL;

No *empilhar(No *topo, int data){
    No *novo = (No *)malloc(sizeof(No));
    if (novo){
        novo->data = data;
        novo->prox = topo;
        return novo;
    }
    else{
        printf("\nNão foi possível empilhar");
    }
    return NULL;
}

No *desempilhar(No **topo){
    if (*topo != NULL) {
      No* remover = *topo;
      *topo = remover->prox;
      return remover;
    }
    else{
      printf("\nPilha Vazia");
      return NULL;
    }
}

void ordenarPilha(No *topo){
    int trocou;
    No *atual;
    No *anterior = NULL;
    do{
        trocou = 0;
        atual = topo;
        while (atual->prox != anterior){
            if (atual->data > atual->prox->data){
                int temp = atual->data;
                atual->data = atual->prox->data;
                atual->prox->data = temp;
                trocou = 1;
            }
            atual = atual->prox;
        }
        anterior = atual;
    }while (trocou);
}

void imprimirPilha(No *topo){
    while (topo){
        printf("%d\n", topo->data);
        topo = topo->prox;
    }
}

int main(){
    int i, data;
    for (i = 0; i < 5; i++){
        scanf("%d", &data);
        topo = empilhar(topo, data);
    }
    ordenarPilha(topo);
    imprimirPilha(topo);
    No*remover=desempilhar(&topo);
    free(remover);
    printf("\n");
    imprimirPilha(topo);
    return 0;
}


