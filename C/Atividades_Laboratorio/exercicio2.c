// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, m;
    printf("Digite o valor de N: \n");
    scanf("%d", &n);
    printf("Digite o valor de M: \n");
    scanf("%d", &m);
    if(n!=m){
        printf("N e M devem ser de mesmo tamanho: \n");
        printf("Digite o valor de N: \n");
        scanf("%d", &n);
        printf("Digite o valor de M: \n");
        scanf("%d", &m); 
    }
    double arrayA[n], arrayB[m], arrayC[n];
    
    printf("Digite o primeiro vetor: \n");
    for(int i=0;i<n;i++){
        scanf("%lf", &arrayA[i]);
    }
    printf("Digite o segundo vetor: \n");
    for(int j=0;j<m;j++){
        scanf("%lf", &arrayB[j]);
    }
    for(int i=0; i<n; i++){
        arrayC[i]=arrayA[i]+arrayB[i];
        printf("%.2lf ", arrayC[i]);
    }
    return 0;
}