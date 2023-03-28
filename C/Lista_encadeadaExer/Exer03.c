/*
Lidas o tamanho n e os elementos inteiros de uma lista verificar
se a sequência está em ordem crescente ou não.  Imprima os elementos.
 Se estiver em ordem crescente imprima 1, caso contrário imprima 0.

Restrições: n > 1

2
8
11

2 8 11
1
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, valor, anterior, ordem = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &valor);
        if (i > 0 && valor <= anterior)
        {
            ordem = 0;
            break;
        }
        anterior = valor;
        printf("%d ", valor);
    }
    printf("\n%d", ordem);
    return 0;
}