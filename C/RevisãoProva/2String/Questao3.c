/*
Enunciado
Uma palavra ou frase é um palíndromo se pode ser lida da mesma forma em sentido normal e ao contrário. Por exemplo, as palavras radar, ovo e reviver são palíndromos.

Neste exercício, faça uma função que verifica se uma string é um palíndromo. Faça um programa principal que lê uma sequência de palavras e imprime a frase XYZ: palindromo ou a frase XYZ: normal, dependendo do caso.

Entrada

A entrada começara com um inteiro 
N
 indicando o número de casos de teste.

Cada caso de teste será uma única palavra contendo não mais que 40 letras do alfabeto romano, todas minúsculas.

Saída

Para cada caso de teste, leia a palavra XYZ e imprima uma das mensagens a seguir.

XYZ: palindromo, se a palavra XYZ lida for palíndromo
XYZ: normal, se não for palíndromo
Dicas
Declare uma variável local à função main() para guardar a palavra lida. Ela deve ser um vetor com pelo menos 41 elementos (40 letras e o byte 0). Leia com scanf() e não se esqueça de especificar o número máximo de caracteres que scanf() deverá ler.

Exemplos de Entrada e Saída
Entrada	
3
ana
banana
vvvvvv
Saída	
ana: palindromo
banana: normal
vvvvvv: palindromo
*/

#include <stdio.h>
#include <string.h>

int palidrome(char *valor){
    int i, j, tam, cont;
    tam=strlen(valor);
    for(i=0, j=tam-1; i<j; i++, j--){
        if(valor[i]!=valor[j]){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    char palavra[40];
    int tam;
    int i;
    scanf("%d", &tam);
    for(i=0; i<tam; i++){
        scanf("%s", &palavra);
        if(palidrome(palavra)==1){
            printf("%s: Palindromo");
        }
        else{
            printf("%s: Normal");
        }
    }
}