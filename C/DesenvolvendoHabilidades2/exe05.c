#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;
typedef struct Pilha{
    Node *top;
    int tamanho;
} Pilha;
// Cria uma nova pilha vazia
Pilha *createPilha(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->top = NULL;
    pilha->tamanho = 0;
    return pilha;
}
// Adiciona um elemento na pilha
void push(Pilha *pilha, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = pilha->top;
    pilha->top = newNode;
    pilha->tamanho++;
}
// Remove um elemento da pilha
int pop(Pilha *pilha){
    if (pilha->top == NULL){
        return -1;
    }
    Node *temp = pilha->top;
    int data = temp->data;
    pilha->top = pilha->top->next;
    free(temp);
    pilha->tamanho--;
    return data;
}
// Verifica se a pilha está vazia
int isEmpty(Pilha *pilha){
    return pilha->top == NULL;
}
// Retorna o tamanho da pilha
int tamanho(Pilha *pilha){
    return pilha->tamanho;
}

int main(){
    Pilha *pilha = createPilha();
    int x;
    while (1){
        scanf("%d", &x);
        if (x == 0){
            break;
        }
        push(pilha, x);
        printf("push %d\n", x);
        while (tamanho(pilha) >= 2 && pilha->top->data < 0){
            int a = pop(pilha);
            int b = pop(pilha);
            int c = a + b;
            printf("pop %d\n", a);
            printf("pop %d\n", b);
            push(pilha, c);
            printf("push %d\n", c);
        }
    }
    return 0;
}