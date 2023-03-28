/*
Enunciado
Operadores balanceados

Uma sequência de parênteses, colchetes e chaves é considerada bem-formada se para cada operador que "abre" existe um correspondente
 que "fecha". Por exemplo: A sequencia "{([])}" é bem-formada, pois todos os operadores fechados na ordem inversa que foram abertos.
  Por outro lado, a sequencia "([)]" não é bem formada, pois o operador ")" foi fechado no momento errado.

Faça um programa que lê várias sequências de operadores e imprime, para cada um deles, a palavra SIM ou a palavra NAO, indicando
 se a sequência está balanceada. Nenhuma sequência terá mais do que 100 caracteres.

A entrada termina com uma linha contendo a sequência de caracteres ###.

Dicas
Use uma pilha para resolver. Empilhe os operadores que "abrem" e veja o que acontece quando aparecem os operadores que "fecham", tanto
 nas sequências bem formadas quanto nas mal formadas.

Exemplos de Entrada e Saída
Entrada	
()
[()]
{}[()]
###
Saída	
SIM
SIM
SIM
Entrada	
)(
(]
{[(])}
###
Saída	
NAO
NAO
NAO
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 110

typedef struct Pilha{
    char elemento[max];
    int topo;
}Pilha;

void empilha(Pilha*pilha, char elemento){
    pilha->elemento[++pilha->topo]=elemento;
}
char desempilhar(Pilha*pilha){
    return pilha->elemento[pilha->topo--];
}
int vazia(Pilha*pilha){
    return pilha->topo==-1;
}
int balanceado(const char*sequencia){
    Pilha pilha;
    pilha.topo=-1;
    int len=strlen(sequencia);
    for(int i=0; i<len; i++){
        char atual=sequencia[i];
        if(atual=='('||atual=='['||atual=='{'){
            empilha(&pilha, atual);
        }else if(atual==')' || atual==']'|| atual=='}'){
            if(vazia(&pilha)){
                return 0;
            }
            char ultimo=desempilhar(&pilha);
            if(atual==')' && ultimo=='('){
                return 0;
            }
            if(atual==']' && ultimo=='['){
                return 0;
            }
            if(atual=='}' && ultimo=='{'){
                return 0;
            }
        }
    }
    return vazia(&pilha);
}

int main(){
    char sequencia[max];
    while(scanf("%s", sequencia) && strcmp(sequencia, "###")!=0){
        if(balanceado(sequencia)){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }
    return 0;
}