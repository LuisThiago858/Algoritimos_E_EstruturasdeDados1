/*2.(2.0 Ptos) Lidos um array A de números reais de tamanho n (n &gt;= 2) e um array B de números
reais de tamanho (m &gt;= 2) criar o array C com os elementos comuns a A e B, ou seja, que
pertencem simultaneamente à A e B. Caso não hajam elementos em comum imprima “Não“.*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Digite n: \n");
    scanf("%d", &n);
    printf("Digite m: \n");
    scanf("%d", &m);
    float arrayA[n], arrayB[m], arrayC[n];
    if(n!=m || n<2 ||m<2){
        printf("Digite n: \n");
        scanf("%d", &n);
        printf("Digite m: \n");
        scanf("%d", &m);
    }
    n-=1;
    m-=1;
    printf("Digite arrayA: \n");
    for(int i=0; i<=n; i++){
        scanf("%f", &arrayA[i]);
    }
    printf("\n Digite arrayB: \n");
    for(int j=0; j<=m; j++){
        scanf("%f", &arrayB[j]);
    }
    printf("A o vetor de interseccao entre os vetores A e B: \n");
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(arrayA[i]==arrayB[j]){
                arrayC[i]=arrayA[i];
                printf("%.1lf ", arrayC[i]);
            }
        }
    }

    return 0;
}