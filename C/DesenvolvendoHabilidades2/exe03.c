#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prox;
};
struct node* criarNo(int data) {
    struct node* novoNo = (struct node*) malloc(sizeof(struct node));
    novoNo->data = data;
    novoNo->prox = NULL;
    return novoNo;
}
void adicionarNo(struct node** lista, int data) {
    struct node* novoNo = criarNo(data);
    novoNo->prox = *lista;
    *lista = novoNo;
}
struct node * intercalarListas(struct node *lista1, struct node *lista2) {
  struct node *temp1 = lista1, *temp2 = lista2;
  struct node *lista3 = NULL;
  for (; temp1 != NULL && temp2 != NULL; temp1 = temp1->prox, temp2 = temp2->prox) {
    if (temp1->data >= 0) {
      adicionarNo(&lista3, temp1->data);
    }
    if (temp2->data >= 0) {
      adicionarNo(&lista3, temp2->data);
    }
  }
  for (; temp1 != NULL; temp1 = temp1->prox) {
    if (temp1->data >= 0) {
      adicionarNo(&lista3, temp1->data);
    }
  }
  for (; temp2 != NULL; temp2 = temp2->prox) {
    if (temp2->data >= 0) {
      adicionarNo(&lista3, temp2->data);
    }
  }
  return lista3;
}
void ordenaLista(struct node*lista){
	struct node*atual;
	struct node*prox;
	int temp;
	for(atual=lista; atual!=NULL; atual= atual->prox){
		for(prox=atual->prox; prox!=NULL; prox=prox->prox){
			if(atual->data>prox->data){
				temp=atual->data;
				atual->data=prox->data;
				prox->data=temp;
			}
		}
	}
}
void imprimirLista(struct node* lista) {
    while (lista != NULL) {
        printf("%d ", lista->data);
        lista = lista->prox;
    }
    printf("\n");
}
int main() {
    struct node* lista1 = NULL;
    struct node* lista2 = NULL;
    int data, data2;
    while(data > 0) {
      scanf("%d", &data);
      adicionarNo(&lista1, data);
    }
    while(data2 > 0) {
      scanf("%d", &data2);
      adicionarNo(&lista2, data2);
    }
    struct node* lista3 = intercalarListas(lista1, lista2);
	  ordenaLista(lista3);
    imprimirLista(lista3);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int valor;
    struct node *prox;
} Node;

Node *ler_sequencia() {
    int valor;
    Node *head = NULL, *atual = NULL;
    while (1) {
        scanf("%d", &valor);
        if (valor < 0) {
            break;
        }
        Node *novoNo = (Node *) malloc(sizeof(Node));
        novoNo->valor = valor;
        novoNo->prox = NULL;
        if (head == NULL) {
            head = novoNo;
        } else {
            atual->prox = novoNo;
        }
        atual = novoNo;
    }
    return head;
}

Node *intercalar(Node *lista1, Node *lista2) {
    Node *head = NULL, *atual = NULL;
    while (lista1 != NULL && lista2 != NULL) {
        Node *novoNo = (Node *) malloc(sizeof(Node));
        if (lista1->valor < lista2->valor) {
            novoNo->valor = lista1->valor;
            lista1 = lista1->prox;
        } else {
            novoNo->valor = lista2->valor;
            lista2 = lista2->prox;
        }
        novoNo->prox = NULL;
        if (head == NULL) {
            head = novoNo;
        } else {
            atual->prox = novoNo;
        }
        atual = novoNo;
    }
    while (lista1 != NULL) {
        Node *novoNo = (Node *) malloc(sizeof(Node));
        novoNo->valor = lista1->valor;
        novoNo->prox = NULL;
        atual->prox = novoNo;
        atual = novoNo;
        lista1 = lista1->prox;
    }
    while (lista2 != NULL) {
        Node *novoNo = (Node *) malloc(sizeof(Node));
        novoNo->valor = lista2->valor;
        novoNo->prox = NULL;
        atual->prox = novoNo;
        atual = novoNo;
        lista2 = lista2->prox;
    }
    return head;
}

void imprimir(Node *head) {
    Node *atual = head;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int main() {
    Node *lista1 = ler_sequencia();
    Node *lista2 = ler_sequencia();
    Node *resultado = intercalar(lista1, lista2);
    imprimir(resultado);
    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prox;
};

// Cria um nó
struct node* criarNo(int data) {
    struct node* novoNo = (struct node*) malloc(sizeof(struct node));
    novoNo->data = data;
    novoNo->prox = NULL;
    return novoNo;
}

// Adiciona um nó à lista
void adicionarNo(struct node** lista, int data) {
    struct node* novoNo = criarNo(data);
    novoNo->prox = *lista;
    *lista = novoNo;
}

// Intercala duas listas ordenadas
struct node * intercalarListas(struct node *lista1, struct node *lista2) {
  struct node *temp1 = lista1, *temp2 = lista2;
  struct node *lista3 = NULL;
  while (temp1 != NULL && temp2 != NULL) {
    if(temp1->data>=0){
      adicionarNo(&lista3, temp1->data);
    }
    temp1 = temp1->prox;
    if(temp2->data>=0){
      adicionarNo(&lista3, temp2->data);
    }
    temp2 = temp2->prox;
  }
  while (temp1 != NULL) {
    if(temp1->data>=0){
      adicionarNo(&lista3, temp1->data);
    }
    temp1 = temp1->prox;
  }
  while (temp2 != NULL) {
    if(temp2->data>=0){
      adicionarNo(&lista3, temp2->data);
    }
    temp2 = temp2->prox;
  }
  return lista3;
}

// Imprime a lista
void imprimirLista(struct node* lista) {
    while (lista != NULL) {
        printf("%d ", lista->data);
        lista = lista->prox;
    }
    printf("\n");
}

int main() {
    struct node* lista1 = NULL;
    struct node* lista2 = NULL;
    int i, j, data, data2;

    while(data>0) {
      scanf("%d", &data);
      adicionarNo(&lista1, data);
    }
    while(data2>0) {
      scanf("%d", &data2);
      adicionarNo(&lista2, data2);
    }
    
    struct node* lista3 = intercalarListas(lista1, lista2);
    
    imprimirLista(lista3);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *prox;
} Node;

Node *head1 = NULL, *head2 = NULL, *head3 = NULL;

void insert(Node **head, int data) {
  Node *newNode = (Node *) malloc(sizeof(Node));
  newNode->data = data;
  newNode->prox = *head;
  *head = newNode;
}

void intercalar(Node *head1, Node *head2) {
  Node *temp1 = head1, *temp2 = head2;

  while (temp1 != NULL && temp2 != NULL) {
    insert(&head3, temp1->data);
    temp1 = temp1->prox;
    insert(&head3, temp2->data);
    temp2 = temp2->prox;
  }

  while (temp1 != NULL) {
    insert(&head3, temp1->data);
    temp1 = temp1->prox;
  }

  while (temp2 != NULL) {
    insert(&head3, temp2->data);
    temp2 = temp2->prox;
  }
}

void organizarLista1(){
  struct node*atual;
  struct node*prox;
  int temp;
  for(atual=head1; atual!=NULL; atual=atual->prox){
    for(prox=atual->prox; prox!=NULL; prox=prox->prox){
      if(atual->data>prox->data){
        temp=atual->data;
        atual->data=prox->data;
        prox->data=temp;
      }
    }
  }
}

void organizarLista2(){
  struct node*atual;
  struct node*prox;
  int temp;
  for(atual=head2; atual!=NULL; atual=atual->prox){
    for(prox=atual->prox; prox!=NULL; prox=prox->prox){
      if(atual->data>prox->data){
        temp=atual->data;
        atual->data=prox->data;
        prox->data=temp;
      }
    }
  }
}


void printList(Node *head) {
  Node *atual = head;
  while (atual != NULL) {
    printf("%d ", atual->data);
    atual = atual->prox;
  }
}

int main() {

  int data1, data2;
    scanf("%d", &data1);
    while(data1>0){
      scanf("%d", &data1);
      insert(&head1, data1);
    }
    scanf("%d", &data2);
    while(data2>0){
      scanf("%d", &data2);
      insert(&head2, data2);
    }
  
  //organizarLista1();
  //organizarLista2();

  printf("Lista 1: ");
  printList(head1);
  printf("\nLista 2: ");
  printList(head2);

  intercalar(head1, head2);

  printf("\nLista Intercalada: ");
  printList(head3);

  return 0;
}
*/

/*
  #include <stdio.h>
  #include <stdlib.h>

  struct node {
    int data;
    struct node *prox;
  };
  struct node*head=NULL;
  // Cria um nó
  struct node* criarNo(int data) {
    struct node* novoNo = (struct node*) malloc(sizeof(struct node));
    novoNo->data = data;
    novoNo->prox = NULL;
    return novoNo;
  }

  // Adiciona um nó à lista
  void adicionarNo(struct node** lista, int data) {
    struct node* novoNo = criarNo(data);
    novoNo->prox = *lista;
    *lista = novoNo;
  }

  // Intercala duas listas ordenadas
  

  // Imprime a lista
  void imprimirLista(struct node* lista3) {
    while (lista3 != NULL) {
      if(lista3->data>0){
        printf("%d ", lista3->data);
      }
      lista3 = lista3->prox;
    }
    printf("\n");
  }

  void organizaLista(struct node* lista3){
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

struct node * intercalar(struct node *lista1, struct node *lista2) {
  struct node *temp1 = lista1, *temp2 = lista2;

  while (temp1 != NULL && temp2 != NULL) {
    adicionarNo(&lista3, temp1->data);
    temp1 = temp1->prox;
    adicionarNo(&lista3, temp2->data);
    temp2 = temp2->prox;
  }

  while (temp1 != NULL) {
    adicionarNo(&lista3, temp1->data);
    temp1 = temp1->prox;
  }

  while (temp2 != NULL) {
    adicionarNo(&lista3, temp2->data);
    temp2 = temp2->prox;
  }
}

  int main() {
    struct node* lista1 = NULL;
    struct node* lista2 = NULL;

    int i, j, data, data2;
    
    for(i=0;i>0;i++){
      scanf("%d", &data);
      adicionarNo(&lista1, data);
    }

    for(j=0; j<5; j++){
      scanf("%d", &data);
      adicionarNo(&lista2, data);
    }
    
    //scanf("%d", &data);
    while(data>0){
      scanf("%d", &data);
      adicionarNo(&lista1, data);
    }
    //scanf("%d", &data2);
    while(data2>0){
      scanf("%d", &data2);
      adicionarNo(&lista2, data2);
    }
    struct node* lista3 = intercalar(lista1, lista2);
    printf("Lista intercalada: ");
    //organizaLista(lista3);
    imprimirLista(lista3);

    return 0;
   }
*/
/*
  struct node* intercalarListas(struct node* lista1, struct node* lista2) {
    struct node dummy;
    struct node* tail = &dummy;
    dummy.prox = NULL;

    while (lista1 != NULL && lista2 != NULL) {
      if (lista1->data < lista2->data) {
        tail->prox = lista1;
        lista1 = lista1->prox;
      } else {
        tail->prox = lista2;
        lista2 = lista2->prox;
      }
      tail = tail->prox;
    }

    tail->prox = (lista1 == NULL) ? lista2 : lista1;
    return dummy.prox;
  }
  */