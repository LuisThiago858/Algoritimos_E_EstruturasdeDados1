#include <stdio.h>


int x, y, resultado;
void soma(){
    resultado=x+y;
}

int main(){
    x=3;
    y=5;
    soma();
    printf("A soma é %d", resultado);
    return 0;
}