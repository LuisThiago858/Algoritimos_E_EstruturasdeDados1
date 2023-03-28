/*Calcular a soma dos números pares desde 100 até 200, inclusive.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, par=0;
    printf("digite um numero:\n");
    scanf("%d", &num1);
    printf("digite outro numero:\n");
    scanf("%d", &num2);
    for(int i=num1; i<num2; i++){
        if(i%2==0){
            par++;
        }
    }
    printf("os numeros pares entre %d e %d são %d", num1, num2, par);
    return 0;
}