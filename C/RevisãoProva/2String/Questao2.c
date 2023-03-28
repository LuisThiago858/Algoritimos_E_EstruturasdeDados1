/*
Enunciado
Crie um programa que leia duas strings e concatene ambas. Altere a implementação da cadeia de caracteres dinâmica apresentada na sala. A fim
 de minimizar o número de realocações, implemente a seguinte estratégia:

  - Se for necessário aumentar a dimensão, isto é, se n >= nmax, redimensione o vetor para o tamanho max(n,2nmax).

  - Se for necessário diminuir a dimensão, caracterizado quando n < 0.5nmax, redimensione o vetor para 0.5nmax.

   - Acrescente a função redimensiona na interface; esta função permite  ajustar a dimensão do vetor para apenas o espaço efetivamente usado
    para representar a cadeia.

 

 

Dicas
Observe o padrão de saída
Utlize a função free para eliminar a cadeia de caracteres dinâmica no fim da execução. 
Exemplos de Entrada e Saída
Entrada	
casa
 carro
Saída	
casacarro
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char pala1[20], pala2[20], pale3[20];
    scanf("%s", pala1);
    scanf("%s", pala2);
  
    strcpy(pale3, pala1);
    strcat(pale3, pala2);
      
    printf("%s", pale3);
}