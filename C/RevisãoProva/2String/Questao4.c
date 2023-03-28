/*
Enunciado
LISTA DE NOMES EM ORDEM ALFABÉTICA
Escreva um programa em Python que leia três nomes e imprima-os em ordem alfabética.

Dicas
Permute os valores das variáveis para ordenar os números
Não utilize as funções lower(), upper() e title() do tipo String da linguagem Python
Exemplos de Entrada e Saída
Entrada	
Joaquim
Joana
Jose
Saída	
Lista de nomes: Joana, Joaquim e Jose
*/

#include <stdio.h>

int main(){
    int i;
    char nome1[20], nome2[20], nome3[20], aux[20];
    scanf("%s", &nome1);
    scanf("%s", &nome2);
    scanf("%s", &nome3);
    if(strcmp(nome1, nome2)>0){
        strcpy(aux, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, aux);
    }
    if(strcmp(nome2, nome3)>0){
        strcpy(aux, nome2);
        strcpy(nome2, nome3);
        strcpy(nome3, aux);
    }
    if(strcmp(nome1, nome3)>0){
        strcpy(aux, nome1);
        strcpy(nome1, nome3);
        strcpy(nome3, aux);
    }
    printf("Lista de nomes: %s, %s e %s\n", nome1, nome2, nome3);
    return 0;
}