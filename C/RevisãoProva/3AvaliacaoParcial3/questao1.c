/*
Enunciado
A sequência de Fibonacci é definida como tendo o primeiro termo igual a 0 e o  segundo termo igual a 1 e cada termo seguinte
 é igual a soma dos dois termos  imediatamente anteriores. Lido um valor inteiro n (n > 1) escreva os n primeiros termos da
 sequência de Fibonacci.

Exemplos de Entrada e Saída
Entrada	
6
Saída	
0 1 1 2 3 5
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int fibonacci, anterior=0, atual=1, proximo, i;
    scanf("%d", &fibonacci);
    printf("%d ", anterior);
    for(i=1; i<fibonacci; i++){
        printf("%d ", atual);
        proximo=anterior+atual;
        anterior=atual;
        atual=proximo;
        
    }
} 