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

struct node{
	int data;
	struct node*prox;
};
struct node*head=NULL;

void criarLista(int val){
	struct node*novo=(struct node*)malloc(sizeof(struct node));
	novo->data=val;
	novo->prox=head;
	head=novo;
}
void imprime(){
	struct node*atual;
	for(atual=head; atual!=NULL; atual=atual->prox){
		printf("%d ", atual->data);
	}
}

void organizar(){
	struct node*atual;
	struct node*prox;
	int temp;
	for(atual=head; atual!=NULL; atual=atual->prox){
		for(prox=atual->prox; prox!=NULL; prox=prox->prox){
			if(atual->data>prox->data){
				temp=atual->data;
				atual->data=prox->data;
				prox->data=temp;
			}
		}
	}
}

int main(void){
	int i, data;
	for(i=0; i<5;i++){
		scanf("%d", &data);
		criarLista(data);
	}
	organizar();
	imprime();
	return 0;
}