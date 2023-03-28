#include <stdio.h>

int main(){
    int m, i, a;
    printf("Digite um numero maior que 2: \n");
    scanf("%d", &m);
    if(m<=2){
        printf("Digite um numero maior que 2: \n");
        scanf("%d", &m);
    }
    int Div[50];
    for(i=1; i<=m; i++){
        if(m%i==0){
            a=i;
            Div[i]=a;
            printf("%d ", Div[i]); 
        }
    }
    return 0;
}
