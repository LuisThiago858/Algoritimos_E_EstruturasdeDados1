/*Aqui está um exemplo de como uma lista encadeada poderia ser implementada em C:*/
#include <stdio.h>
#include <stdlib.h>

struct lista
{
   int element;
   struct lista *next;
};

// Função para criar um novo nó
struct lista *createNode(int element)
{
   struct lista *newNode = (struct lista *)malloc(sizeof(struct lista));
   newNode->element = element;
   newNode->next = NULL;
   return newNode;
}

// Função para adicionar um novo nó ao final da lista
void appendNode(struct lista **head, int element)
{
   struct lista *newNode = createNode(element);
   if (*head == NULL)
   {
      *head = newNode;
      return;
   }
   struct lista *current = *head;
   while (current->next != NULL)
   {
      current = current->next;
   }
   current->next = newNode;
}

// Função para remover um nó da lista
void removeNode(struct lista **head, int element)
{
   if (*head == NULL)
   {
      return;
   }
   struct lista *current = *head;
   if (current->element == element)
   {
      *head = current->next;
      free(current);
      return;
   }
   while (current->next != NULL && current->next->element != element)
   {
      current = current->next;
   }
   if (current->next != NULL)
   {
      struct lista *temp = current->next;
      current->next = temp->next;
      free(temp);
   }
}

// Função para imprimir os elementos da lista
void printList(struct lista *head)
{
   while (head != NULL)
   {
      printf("%d ", head->element);
      head = head->next;
   }
   printf("\n");
}

int main()
{
   struct lista *head = NULL; // cabeça da lista inicialmente vazia
   appendNode(&head, 1);
   appendNode(&head, 2);
   appendNode(&head, 3);
   appendNode(&head, 4);
   printList(head); // imprime 1 2 3 4
   removeNode(&head, 3);
   printList(head); // imprime 1 2 4
   return 0;
}
/*Neste exemplo, a lista é criada com a função createNode, que aloca memória para um novo nó e inicializa seus elementos.
 A função appendNode adiciona um novo nó ao final da lista, enquanto a função removeNode remove um nó da lista. A função
  printList percorre a lista e imprime os elementos.*/