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

#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int val;
    struct lista *prox;
};
struct lista *criar_lista(int val){
    struct lista *novo = (struct lista *)malloc(sizeof(struct lista));
    novo->val = val;
    novo->prox = NULL;
    return novo;
}
void add_lista(struct lista **head, int val){
    struct lista *novo = criar_lista(val);
    if (*head == NULL){
        *head = novo;
        return;
    }
    struct lista *temp = *head;
    while (temp->prox != NULL){
        temp = temp->prox;
    }
    temp->prox = novo;
}
void imprimir_lista(struct lista *head){
    struct lista *temp = head;
    while (temp != NULL){
        printf("%d ", temp->val);
        temp = temp->prox;
    }
    printf("\n");
}
int main(){
    struct lista *head = NULL;
    int n;
    for (int i = 0; i < 5; i++){
        scanf("%d", &n);
        add_lista(&head, n);
    }
    scanf("%d", &n);
    imprimir_lista(head);
    add_lista(&head, n);
    imprimir_lista(head);
    return 0;
}