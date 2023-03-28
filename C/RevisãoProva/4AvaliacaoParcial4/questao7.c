/*
Enunciado
Conte a frequência da palavra “que” em uma string lida.

Exemplos de Entrada e Saída
Entrada	
o pescador que era de maués perdeu a rede que era de nylon.
Saída	
2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[100];
    int contPalv=0, tam, i;
    scanf("%[^\n]s", frase);
    tam=strlen(frase);
    for(i=0; i<tam; i++){
        if(frase[i]=='q' && frase[i+1]=='u' && frase[i+2]=='e' && frase[i+3]==' '){
            contPalv++;
        }
    }
    printf("%d", contPalv);
    return 0;
}