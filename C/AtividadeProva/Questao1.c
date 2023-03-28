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
#include <string.h>
#define MAX 100

int main() {
    char str[MAX];
    char ch;
    int count = 0, i, tam;
    scanf("%[^\n]s", str); // Lê uma string com espaços
    scanf(" %c", &ch); // 
    tam = strlen(str); // Obtém o comprimento da string
    for (i = 0; i < tam; i++) {
        if (ch == str[i]) {
            count++;
        }
    }
    printf("%s\n", str);
    printf("%c %d", ch, count);
    return 0;
}