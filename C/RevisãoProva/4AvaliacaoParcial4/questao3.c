/*
Enunciado
Lidas o tamanho n e os elementos inteiros de um vetor verificar se a sequência ods elementos do vetor
 está em ordem crescente ou não. Imprima os elementos do vetor. Se estiver em ordem crescente
  imprima 1, caso contrário imprima 0. Se o vetor tem apenas um elemento, ele é considerado em ordem crescente.

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
int main(){
    int tam, i, ordem=0;
    scanf("%d", &tam);
    int num[tam];
    for(i=0; i<tam; i++){
        scanf("%d", &num[i]);
    }
    for(i=0; i<tam; i++){
        if(num[i]<num[i+1]){
            ordem=1;
        }
    }
    printf("\n");
    for(i=0; i<tam; i++){
        printf("%d ", num[i]);
    }
    
    if(ordem!=0){
        printf("\n0");
    }else{
        printf("\n1");
    }
    return 0;
}