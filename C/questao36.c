/*Pode-se aproximar a raiz quadrada de um número subtraindo-se sucessivamente
números ímpares mais altos do número original até que o número original seja
inferior ou igual a zero. O número de subtrações é igual à raiz quadrada
aproximada do número original.
Ex.: 23 - 1 = 22
    22 - 3 = 19
    19 - 5 = 14
    14 – 7 = 7      raiz quadrada ≅ 4
    7 – 9 = -2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int numero, termos, soma;
    do
    {
        printf("\nInforme um numero: ");
        scanf("%d", &numero);
        for (termos = 1, soma = 0; soma < numero; termos++)
        {
            soma = (termos * (2 + (termos - 1) * 2)) / 2;
        }
        if (numero >= 0)
        {
            if (soma == numero)
                printf("A raiz quadrada exata de %d eh %d\n", numero, termos - 1);

            else
                printf("O numero %d nao e raiz exata!\n", numero);
        }
    } while (numero >= 0);
}