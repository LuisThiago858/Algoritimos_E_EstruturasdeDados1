/*
Enunciado
Push, push, pop

Leia uma sequência de números inteiros arbitrariamente longa x1,x
2
,
…
, colocando cada um deles no topo de uma pilha inicialmente vazia.

Sempre que o valor no topo da pilha for um número negativo, você deve tentar tirar dois elementos da pilha, somá-los e colocar o resultado no topo.

Pare quando esse procedimento não for mais possível ou quando o topo da pilha contiver o valor zero, mesmo que ainda haja números na entrada.

Como saída, imprima cada operação de inserção e remoção que for realizada. Ao empilhar um elemento, imprima uma string no formato "push %d". Ao desempilhar, imprima uma string no formato "pop %d".

Exemplos de Entrada e Saída
Entrada	
1 2 -3
Saída	
push 1
push 2
push -3
pop -3
pop 2
push -1
pop -1
pop 1
push 0
Entrada	
1 -3 2 0
Saída	
push 1
push -3
pop -3
pop 1
push -2

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int data;
    struct No*prox;
}No;

typedef struct Pilha{
    No*topo;
    int tamanho;
}Pilha;

Pilha*criarPilha(){
    Pilha *pilha=(Pilha*)malloc(sizeof(Pilha));
    pilha->topo=NULL;
    pilha->tamanho=0;
    return pilha;
}

void empilha(Pilha *pilha, int data){
    No *novo=(No*)malloc(sizeof(No));
    novo->data=data;
    novo->prox=pilha->topo;
    pilha->topo=novo;
    pilha->tamanho++;
}

int desempilha(Pilha *pilha){
    if(pilha->topo==NULL){
        return -1;
    }
    No*temp=pilha->topo;

    int data=temp->data;

    pilha->topo=pilha->topo->prox;
    free(temp);
    pilha->tamanho--;
    return data;
}

int vazio(Pilha *pilha){
    return pilha->topo==NULL;
}
int tamanho(Pilha *pilha){
    return pilha->tamanho;
}

int main(){
    Pilha *pilha =criarPilha();
    int x;
    while(1){
        scanf("%d", &x);
        empilha(pilha, x);
        printf("push %d\n", x);
        if(x==0){
            break;
        }
        while(tamanho(pilha)>=2 && pilha->topo->data<0){
            int a=desempilha(pilha);
            int b=desempilha(pilha);
            int c=a+b;
            printf("pop %d\n", a);
            printf("pop %d\n", b);
            empilha(pilha, c);
            printf("push %d\n", c);
        }
    }
}