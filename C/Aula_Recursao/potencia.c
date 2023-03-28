#include <stdio.h>
int potencia(int base, int expoente){
    printf("\n%d elevado a %d ", base, expoente);
    if (expoente == 0)
        return 1;
    else
        return (base * potencia(base, expoente - 1));
}

int main(){
    // int base = 2, expoente = 8, resultado;
    int base, expoente, resultado;
    scanf("%d", &base);
    scanf("%d", &expoente);

    resultado = potencia(base, expoente);
    printf("\n%d elevado a %d = %d", base, expoente, resultado);

    return 0;
}