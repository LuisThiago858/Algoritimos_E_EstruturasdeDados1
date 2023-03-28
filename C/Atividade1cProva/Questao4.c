/*4. (2.0 Ptos) Lidos os números inteiros m e (m, n &gt; 0); m &lt; n), imprima os números primos p no
intervalo entre m e n (m &lt; p &lt; n).*/

// Online C compiler to run C program online
#include <stdio.h>

int ehPrimo(int x){
        int cont=0;
        for(int i=1; i<=x; i++){
            if(x%i==0){
                cont++;
            }
        }
        if(cont==2){
            return 1;
        }else{
            return 0;
        }
}
int main() {
    int m, n, a;
    printf("Digite um numero m: \n");
    scanf("%d", &m);
    printf("Digite um numero n: \n");
    scanf("%d", &n);
    if((n<m)|| (n<0) ||(m<0)){
        printf("Digite um numero m: \n");
        scanf("%d", &m);
        printf("Digite um numero n: \n");
        scanf("%d", &n);
    }
    for(int i=m+1; i<n ; i++){
        if(ehPrimo(i)==1){
            a=i;
            printf("%d ", a);
        }
    }
}