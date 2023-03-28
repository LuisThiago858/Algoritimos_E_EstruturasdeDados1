/*
Lidos um array A de inteiros de tamanho 10, um valor inteiro j e um valor inteoiro k,
 troque a as posições A[j] por A[k] do array e imprima o novo arranjo do array. Restrições:
  j diferente de k, 0 <= j <= 9, 0 <= k <= 9.

Exemplos de Entrada e Saída
Entrada	
7 11 9 10 22 25 22 5 13 32
0
9  
Saída	
32 11 9 10 22 25 22 5 13 7
*/

#include<stdio.h>
int main(){
    int A[10], j, k, i, aux;
    for(i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &j);
    if(j<0 && j>9){
        scanf("%d", &j);
    }
    scanf("%d", &k);
    if(k<0 && k>9){
        scanf("%d", &j);
    }
    
    aux=A[j];
    A[j]=A[k];
    A[k]=aux;
    
    for(i=0; i<10; i++){
        printf("%d ", A[i]);
    }
}