/*Encontre a maxima ocorrencia de um caractere em uma string*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], maiorC, maxChar;
    int tam, count = 0, max = 0;

    gets(frase);
    tam=strlen(frase);
    
    for (int i=0;i<tam;i++){
        count=0;
        for (int j=0;j<tam;j++){
            if (frase[i]==frase[j]){
                count++;
            }
        }
        if (count>max){
            max=count;
            maiorC=frase[i];
        }
    }
    printf("O caractere '%c' tem maior frequência aparecendo %d vezes\n", maiorC, max);
    return 0;
}