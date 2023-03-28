/*
Enunciado
Lidos 5 valores inteiros e um valor n inteiro, crie uma lista encadeada com os 5 números lidas e imprima. Em seguida inclua o valor de n na cauda da lista e imprima a lista modificada.

Exemplos de Entrada e Saída
Entrada	
10
15
20
25
30
81
Saída	
10 15 20 25 30 
10 15 20 25 30 81
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct No{
    int data;
    struct No *prox;
};

struct No* criarLista(int val){
    struct No*novo=(struct No*)malloc(sizeof(struct No));
    novo->data=val;
    novo->prox=NULL;
    return novo;
}

void adicionaNo(struct No** lista, int val){
    struct No*novo=criarLista(val);
    novo->prox=*lista;
    *lista=novo;
}

void organizaLista(struct No*lista){
    struct No*atual;
    struct No*prox;
    int temp;
    for(atual=lista; atual!=NULL; atual=atual->prox){
        for(prox=atual->prox; prox!=NULL; prox=prox->prox){
            if(atual->data>prox->data){
                temp=atual->data;
                atual->data=prox->data;
                prox->data=temp;
            }
        }
    }

}

void imprime(struct No*lista){
    while(lista!=NULL){
        printf("%d ", lista->data);
        lista=lista->prox;
    }
}

int main(){
    struct No* lista=NULL;
    int data, i;
    for(i=0;i<5;i++){
        scanf("%d", &data);
        adicionaNo(&lista, data);
    }
    scanf("%d", &data);
    organizaLista(lista);
    imprime(lista);
    printf("\n");
    adicionaNo(&lista, data);
    organizaLista(lista);
    imprime(lista);

    return 0;
}