/*Lida uma setenca substitua as minúsculas pelas maiúsculas e vice-versa*/
#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    int i, tam;
    gets(frase);
    tam=strlen(frase);
    for(i=0; i<tam; i++){
        if(frase[i]>='a' && frase[i]<='z'){
            frase[i]=frase[i]-32;//conversão de minusculo para maiusculo
        }else if(frase[i]>='A' && frase[i]<='Z'){
            frase[i]=frase[i]+32;//conversão de maiusculo pra minusculo
        }
    }
    printf("%s", frase);
    return 0;
}