/*Lidos dois String(string1 e strin2)gere e imprime o string3 que é composto pela concatenacao
dos dois primeiros caracteres do string1 com os três ultimos carateres do String2
Entrada
Amazonas
Santa Catarina
Saída
Amina*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string1[15], string2[15], string3[15], aux[2], aux2[3];
    
    
    int tam, cont=3;
    gets(string1);
    printf("\n");
    gets(string2);
    for(int i=0; i<2; i++){
        aux[i]=string1[i];
    }
    tam=strlen(string2);
    for(int j=0; j<3; j++){
        aux2[j]=string2[tam-cont];
        cont--;
    }
    

    for(int i=0; i<2; i++){
        printf("%c", aux[i]);
    }
    for(int i=0; i<3; i++){
        printf("%c", aux2[i]);
    }
    
    return 0;
}