/*Maximo divisor comum entre dois numeros utilizando recursão*/
#include <stdio.h>

int mdc(int a, int b){
    if (b == 0){
        return a;
    }
    else{
        return mdc(b, a % b);
    }
}

int main(){
    int a, b;
    printf("Insira os dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("MDC: %d\n", mdc(a, b));
    return 0;
}