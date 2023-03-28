#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó na lista encadeada
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó na lista
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Criando a cabeça da lista encadeada
    struct Node* head = createNode(0);

    // Criando alguns nós adicionais
    struct Node* second = createNode(1);
    struct Node* third = createNode(2);

    // Encadeando os nós juntos
    head->next = second;
    second->next = third;

    // Imprimindo os valores dos nós
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    // Liberando a memória
    free(head);
    free(second);
    free(third);
    return 0;
}
