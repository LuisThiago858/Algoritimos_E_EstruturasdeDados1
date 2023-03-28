/*
Enunciado
Lidos 5 valores inteiros, crie uma lista encadeada e em seguida percorra a lista e imprima os valores de seus nós.

Exemplos de Entrada e Saída
Entrada	
4
8
9
12
23
Saída	
4 8 9 12 23
*/
#include <stdio.h>
#include <stdlib.h>

//dados
struct No{
    int data;
    struct No*prox;
};
//criarNo
struct No* criarNo(int val){
    struct No*novo=(struct No**)malloc(sizeof(struct No));
    novo->data=val;
    novo->prox=NULL;
    return novo;
}
//adicionarNo

void adicionaNo(struct No**lista, int val){
    struct No*novoNo=criarNo(val);
    novoNo->prox=*lista;
    *lista=novoNo;
}

//organizarNo
void organizaNo(struct No*lista){
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

//imprimirNo

void imprimeNo(struct No*lista){
    while(lista!=NULL){
        printf("%d ", lista->data);
        lista=lista->prox;
    }
    printf("\n");
}

int main(){
    struct No*lista=NULL;
    int data;
    for(int i=0; i<5; i++){
        scanf("%d", &data);
        adicionaNo(&lista, data);
    }
    organizaNo(lista);
    imprimeNo(lista);
}