#include <stdio.h>

int main() {
    int a, i, j, chave1=0, chave2=0, chave3=0;
    printf("Digite o tamanho da senha terá: \n")
    scanf("%d", &a);
    int senha[a];
    scanf("%d", &senha[i]);
    for (i = 0; i < a; i++) {
        scanf("%d", &senha[i]);
    }
    for (i = 0; i < a; i++) {
        for (j = i + 1; j < a; j++) {
            if(senha[0]==0){
                chave1++;
            }
            if(senha[i] == senha[j]) {
                chave2++;
            }
            if(1==senha[i] && 2==senha[i]+1 && 3==senha[i]+2){
               chave3++; 
            }
        }
    }
    if(chave1>=1 || chave2>=2 || chave3>=1){
        printf("Incorreta");
    }else{
        printf("Correta");
    }
    return 0;
}