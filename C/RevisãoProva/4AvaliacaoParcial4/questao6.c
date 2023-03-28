/*
Enunciado
Crie um array de 10 caracteres. Preencha os elementos do array com o caracter "0". Leia um valor inteiro n, n > 0. Aloque o caracter "R"
 randomicamente no array, e, em seguida, aloque o caracter "S", em uma casa diferente de P. Imprima n e o array.

IMPORTANTE

Há várias possibilidades de saidas corretas. A questão será corrigida pelo professor e não automaticamente pelo CodeBench.

Dicas
Sugestão: Use as funções RAND ou SRAND.

Exemplos de Entrada e Saída
Entrada	
1
Saída	
1 00R000S0
Entrada	
0
Saída	
Erro
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    int num, num1, num2, i;
    scanf("%d", &num);
    char Vetor[10]={'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    srand(time(NULL));
    num1=rand()%10;
    Vetor[num1]='R';
    do{
        num2=rand()%10;
    }while(Vetor[num2]==Vetor[num1]);
    Vetor[num2]='S';

    for(i=0; i<10; i++){
        printf("%c ", Vetor[i]);
    }

    return 0;
}
