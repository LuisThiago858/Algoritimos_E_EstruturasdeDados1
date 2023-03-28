/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos
lados de um triângulo e, se forem, verificar se é um triângulo equilátero,
isósceles ou escaleno. Se eles não formarem um triângulo escrever uma
mensagem de erro.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, z;
    printf("digite x:\n");
    scanf("%d", &x);
    printf("digite y:\n");
    scanf("%d", &y);
    printf("digite z:\n");
    scanf("%d", &z);

    if (((y-z)<x) && (x<(y+z))){
        printf("A forma e um triangulo");
    }else if (((x-z)<y) && (y<(x+z))){
        printf("A forma e um triangulo");
    }else if (((x-y)<z) && (z<(x+y))){
        printf("A forma e um triangulo");
    }else{
        printf("A forma não e um triangulo");
    }

    if((x==y)&&(y==z)&&(z==x)){
        printf(" Triangulo Equilatero");
    }else if((x==y)||(y==z)||(z==x)){
        printf(" Triangulo Isósceles");
    }else if((x!=y)&&(y!=z)&&(z!=x)){
        printf(" Triangulo Escaleno");
    }else{
        printf("Error!!");
    }

    return 0;
}