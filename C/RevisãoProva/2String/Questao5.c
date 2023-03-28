/*
Lida uma string imprima o número de consoantes e o número de vogais.

Exemplos de Entrada e Saída
Entrada	
parintins
Saída	
6
3
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[40], C;
    int tam, i, contVogal=0, contConsoante=0;
    scanf("%s", palavra);
    tam=strlen(palavra);
    for(i=0; i<tam; i++){
        C=tolower(palavra[i]);
        if(C=='a' || C=='e' || C=='i'|| C=='o'||C=='u'){
            contVogal++;
        }else{
            contConsoante++;
        }
    }
    printf("%d\n", contConsoante);
    printf("%d", contVogal);
    return 0;
}