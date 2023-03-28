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
    int i, tam, contVogal=0, contConso=0;
    char palavra[15];
   
    scanf("%s", &palavra);
    tam=strlen(palavra);
    for(i=0; i<tam;i++){
        char dim=tolower(palavra[i]);
        if(dim=='a' || dim=='e'|| dim=='i'|| dim=='o'|| dim=='u'){
            contVogal++;
        }else{
            contConso++;
        }
    }
    printf("%d\n", contConso);
    printf("%d", contVogal);
    return 0;
}