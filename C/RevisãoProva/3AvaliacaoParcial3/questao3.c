/*
Enunciado
Conte o número de vezes de frequência da palavra “que” em uma string lida.

 

Exemplos de Entrada e Saída
Entrada	
nada se espera de quem nada colabora
Saída	
0
*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], i, tam, contQue=0;
    scanf("%[^\n]s", frase);
    tam=strlen(frase);
    for(i=0; i<tam; i++){
        if(frase[i]=='q' && frase[i+1]=='u'&& frase[i+2]=='e'&& frase[i+3]==' '){
            contQue++;
        }
    }
    printf("%d", contQue);

    return 0;
}