/*
Enunciado
Crie uma matriz números inteiros de dimensões 3 x 3 e preencha toda a matriz com o valor 0. Leia o valor de uma linha ou coluna.
 Preencha esta posição na matriz com o valor 2. Em seguida preencha todas as casas vizinhas à casa contendo 2  com o valor 3 e imprima a matriz.

Exemplos de Entrada e Saída
Entrada	
1
1
Saída	
3 3 3
3 2 3
3 3 3
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int linha, coluna, i, j;
    scanf("%d", &linha);
    scanf("%d", &coluna);

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j]=0;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[i][j]=3;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            matriz[linha][coluna]=2;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}