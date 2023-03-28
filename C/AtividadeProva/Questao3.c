/*
Lidas o tamanho n e os elementos inteiros de um vetor verificar se a sequência ods elementos do vetor está em ordem crescente ou não. Imprima os elementos do vetor. Se estiver em ordem crescente imprima 1, caso contrário imprima 0. Se o vetor tem apenas um elemento, ele é considerado em ordem crescente.

Restrições: n > 1

Exemplos de Entrada e Saída
Entrada	
3
8
21
18
Saída	
8 21 18
0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, anterior, ordem_crescente = 1;
    scanf("%d", &n);

    int vetor[n];
    scanf("%d", &vetor[0]);
    anterior = vetor[0];
    for (i = 1; i < n; i++){
        scanf("%d", &vetor[i]);
        if (vetor[i] < anterior){
            ordem_crescente = 0;
            break;
        }
        anterior = vetor[i];
    }
    for (i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n%d\n", ordem_crescente);

    return 0;
}
