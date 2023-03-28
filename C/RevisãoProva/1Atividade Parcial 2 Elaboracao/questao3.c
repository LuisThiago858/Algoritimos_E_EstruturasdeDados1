/*
Um mapa é representado por uma matriz 10x10. As áreas de terra firme são marcadas por 1,
 as áreas alagadiças são denotadas por 2 e 3 corresponde às superfícies líquidas. Lida a 
 matriz imprima as áreas que correspondem às quantidades de  quadrados marcados com 1, 2 e 3.
*/

#include <stdio.h>

int main(){
    int mapa[10][10], i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            scanf("%d", &mapa[i][j]);
        }
    }
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
    return 0;
}