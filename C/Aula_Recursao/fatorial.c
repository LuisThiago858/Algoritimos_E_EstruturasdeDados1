#include <stdio.h>

int fatorial(int n){
    int r;
    if (n == 1 || n == 0){
        r = 1;
        printf("Fatorial de %d = %d; \n", n, r);
        return r;
    }
    else{
        r = n * fatorial(n - 1);
        printf("Fatorial de %d = %d; \n", n, r);
        return r;
    }
}

int main(){
    int x = 5;
    int f;
    f = fatorial(x);
    printf("Resultado Fatorial de %d = %d; \n", x, f);
}