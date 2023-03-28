/*
Lidos 5 valoress inteiros, crie uma lista encadeada
e em seguida percorra a lista e imprima os valores de seus nós.

2
3
5
7
11

2 3 5 7 11
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; // o valor inteiro
    struct Node* next; // o ponteiro para o proximo
    
};
struct Node* head = NULL; //define o cabeca da lista

void inserir(int data) { // cria a lista
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); //aloca espaco de memoria
    newNode->data = data; // o espaco atual recebe o valor da struct
    newNode->next = head; // o espaco atual recebe um ponteiro para proximo que no caso e NULL 
    head = newNode; //e o cabeca recebe o lista
}
void sortList() {
    struct Node* current; //possivelmente atual
    int temp; // um variavel temporaria para armazenar valores
    for (current = head; current->next != NULL; current = current->next) { //atual recebe cabeca da lista ; se o atual que aponta para proximo for diferente de NULL; atual recebe atual apontando para prox
        for (struct Node* next = current->next; next != NULL; next = next->next) {//o nó da struct= o atual apontando para o prox ; enquanto o prox for diferente de NULL ; prox = prox apontando para prox
            if (current->data > next->data) { //se o dado atual for maior que o prox dado
                temp = current->data; // temp recebe o atual data
                current->data = next->data;// atual data = prox data
                next->data = temp;//prox data = temp
                //e assim a troca e feita;
            }
        }
    }
}
void printList() {
    struct Node* current = head;// o no atual = cabeca
    while (current != NULL) {//enquanto o atual for diferente de NULL
        printf("%d ", current->data);// imprime o atual data
        current = current->next;// atual= atual prox
    }
}
int main() {
    int i, data; // variavel contador e o dado
    for (i = 0; i < 5; i++) { 
        scanf("%d", &data);// le 5 vezes 
        inserir(data);//e insere na lista
    }
    sortList();//depois de todos estarem lidos eles sao organizados
    printList();// depois imprimidos
    return 0;
}

