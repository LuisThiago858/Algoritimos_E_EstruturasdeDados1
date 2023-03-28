/*5.(2.0 Ptos) Dizemos que um número natural é perfeito se é igual à soma de todos os seus
fatores (divisores), excluindo ele próprio. Por exemplo, 6 e 28 são números perfeitos, veja: 6 = 1
+ 2 + 3 (fatores de 6: 1, 2, 3 e 6), excluímos o número 6. 28 = 1 + 2 + 4 + 7 + 14 (fatores de 28:
1, 2, 4, 7, 14, 28), excluímos o 28. Elabore um programa que imprima todos os números
perfeitos entre 1 e 10000.*/

#include <stdio.h>

int divisaoP(int x){
        int a, soma=0;
        int array[10000];
        for(int i=1; i<x; i++){
            if(x%i==0){
                a=i;
                array[i]=a;
                soma=soma+array[i];
            }
        }
        if(soma==x){
            return 1;
        }else{
            return 0;
        }
}
int main() {
    int num;
    for(int i=1; i<=10000; i++){
        num=i;
        if(divisaoP(num)==1){
            printf("%d ", num);
        }
    }
    return 0;
}