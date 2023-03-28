/*
Lidas duas matrizes quadradas A e B de ordem 2 compostas
por números inteiros, calcule e imprima a matriz C, produto de A por B.

A Questão 4 é sobre multiplicação de matrizes (veja https://www.somatematica.com.br/emedio/matrizes/matrizes4.php0.

Enunciado

Lidas duas matrizes quadradas A e B de ordem 2 compostas por números inteiros, calcule e imprima a matriz C, produto de A por B.

Entrada

Primeiro são lidos os dados da primeira matriz A e depois
são lidos os dados da segunda matriz B.

2 // a11
4 // a12
-3 // a21
5 // a22
1 // b11
0 // b12
0 // b21
1 // b22

Saída

São impressos os dados da matriz C, produto de A por C.

2 4
-3 5

2
4
-3
5
1
0
0
1

56 -8
4 12

*/
#include <stdio.h>
#include <string.h>

int main(){
    int matrizA[2][2];
    int matrizB[2][2];

    int matrizC[2][2]={0};

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                matrizC[i][j]+=matrizA[i][k]*matrizB[k][j];
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\n", matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}