/*
Enunciado
Conte o número de ocorrências de cada caracter em uma string lida.

Exemplos de Entrada e Saída
Entrada	
humaita
Saída	
h 1
u 1
m 1
a 2
i 1
t 1
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    int contLetra[26] = {0}; // Inicializa todos os contadores com zero
    int tam, i;

    scanf("%s", palavra);
    tam = strlen(palavra);

    for (i = 0; i < tam; i++) {
        contLetra[palavra[i] - 'a']++; // Incrementa o contador correspondente à letra atual
    }

    for (i = 0; i < tam; i++) {
        if (contLetra[palavra[i] - 'a'] > 0) { // Verifica se já contamos a letra atual
            printf("%c %d\n", palavra[i], contLetra[palavra[i] - 'a']);
            contLetra[palavra[i] - 'a'] = 0; // Marca que já contamos essa letra
        }
    }

    return 0;
}