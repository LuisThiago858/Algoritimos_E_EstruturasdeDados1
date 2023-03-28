// Online C compiler to run C program online
#include <stdio.h>

int main() {
    double arrayA[5], arrayB[5], arrayC[5];
    printf("Digite o primeiro vetor\n");
    for(int i=0;i<5;i++){
        scanf("%lf", &arrayA[i]);
    }
    printf("Digite o segundo vetor\n");
    for(int j=0;j<5;j++){
        scanf("%lf", &arrayB[j]);
    }
    for(int i=0; i<5; i++){
        arrayC[i]=arrayA[i]+arrayB[i];
        printf("%.2lf ", arrayC[i]);
    }
    
}