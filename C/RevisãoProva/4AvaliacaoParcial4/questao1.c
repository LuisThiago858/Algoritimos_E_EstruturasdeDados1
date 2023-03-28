/*
Enunciado
Lida uma string e um caracter, calcule a frequência da ocorrência do caracter na string. Imprima a string, o caracter e a frequência.

Dicas
Em programação na linguagem C, uma string é um array unidimensional de caracteres e cada string é terminada com um caracter nulo (\0). 

 

char c[] = "c string";


Memory diagram of strings in C programming
Exemplos de Entrada e Saída
Entrada	
piramutaba
t
Saída	
piramutaba
t 1
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[50], c;
    int cont=0, i, tam;
    scanf("%[^\n]", palavra);
    scanf(" %c", &c);
    tam=strlen(palavra);

    for(i=0; i<tam; i++){
        if(palavra[i]==c){
            cont++;
        }
    }
    printf("%s\n", palavra);
    printf("%c %d", c, cont);
    return 0;
}