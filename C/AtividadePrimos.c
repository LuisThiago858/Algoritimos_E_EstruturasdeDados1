#include <stdio.h>

int main()
{
    int num, i, resto = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        if (num % i == 0){
            resto++;
        }
    }
    if (resto == 2){
        printf("%d e um numero primo", num);
    }
    else{
        //se ele contar mais ou menos
        printf("%d não e um numero primo", num);
    }
    return 0;
}