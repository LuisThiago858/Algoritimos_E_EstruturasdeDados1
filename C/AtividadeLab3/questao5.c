/*5. Encontre o número de vezes que a palavra dada 'que' aparece em uma
string.
Input 1

Paulo, que é amazonense, é amigo de Carla, que é roraimense.

Output 1
Frequência palavra que 2 vezes*/

// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int tam, contQue;
    gets(frase);
    tam=strlen(frase);
    for(int i=0; i<tam; i++){
        if(frase[i]=='q' && frase[i+1]=='u' && frase[i+2]=='e'){
            contQue++;
        }
    }
    printf("A palavra que apareceu %d vezes", contQue);
    return 0;
}