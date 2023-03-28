/*
Lidos 5 valores inteiros, crie uma lista encadeada e em 
seguida crie uma segunda lista e copie os valores da primeira
 lista e imprima-os.

1
3
5
7
9

1 3 5 7 9

*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data; // dado inteiro da lista
    struct node *next; //ponteiro para proximo
};
struct node *head1 = NULL;//cabeca da primeira lista
struct node *head2 = NULL;//cabeca do segunda lista

void criarLista(int val) { //criar lista
    struct node *newNode = (struct node*)malloc(sizeof(struct node));// aloca o espaco dessa lista para este no
    newNode->data = val;//no apontando para data=val que e um parametro
    newNode->next = head1;// no apontando para prox=cabeca da primeira lista
    head1 = newNode; // o cabeca dessa lista recebe nó
}
void copiarLista() {//copiar lista
    struct node *temp = head1;// variavel temp que aponte para o cabeca da primeira lista
    while (temp != NULL) {// enquanto esse temp for diferente de NULL
        struct node *newNode = (struct node*)malloc(sizeof(struct node));//aloca memoria em um novo no
        newNode->data = temp->data;
        newNode->next = head2;
        head2 = newNode;
        temp = temp->next;
    }
}
void imprimirLista() {
    struct node *temp = head2;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    int i, val;
    for (i = 0; i < 5; i++) {
        scanf("%d", &val);
        criarLista(val);
    }
    copiarLista();
    imprimirLista();
    return 0;
}