/*
Enunciado
Lidos os elementos de uma matriz quadrada de ordem 3 (3 linhas, 3 colunas) de valores inteiros, verifique se a matriz 
é uma matriz identidade. Imprima S se for matriz identidade e N em caso contrário.

Dicas
Uma matriz é Identidade quando é uma matriz quadrada, tem todos os elementos nulos, excetos os da diagonal principal que são iguais a 1.

Exemplos de Entrada e Saída
Entrada	
1 
0
0
0 
1
0
0 
0 
1
Saída	
S
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3], i, j, identidade=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; i++){
            if(matriz[i][j]==1){
                if(matriz[i+1][j+1]==1){
                    if(matriz[i+2][i+2]==1){
                        identidade=1;
                        break;
                    }
                }
            }else if(matriz[i][j+2]==1){
                if(matriz[i+1][j+1]==1){
                    if(matriz[i+2][j]==1){
                        identidade=1;
                        break;
                    }
                }
            }
        } 
        if(!identidade){
            break;
        }
    }
    if(identidade){
        printf("N\n");
    }else{
        printf("S\n");
    }

    return 0;
}