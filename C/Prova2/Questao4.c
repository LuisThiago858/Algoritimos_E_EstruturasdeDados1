/*Lida as posicoes de um bispo e de uma torre, peca do jogo de xadrez, representante as casas
dominadas pelas pecas pelo número 1. As casas que são dominadas ao mesmo tempo pelo Bispo e
pela Torre devem ser marcadas com 2. Imprima B na posicao correspondente lida. Idem para a Torre

Entrada
3 4
1 2
Saida
0 1 0 1 0 0 0 1
1 1 2 'T' 1 1 2 1
0 0 0 1 0 1 0 0
0 0 0 1'B'0 0 0
0 0 0 2 0 1 0 0
0 0 1 1 0 0 1 0
0 1 0 1 0 0 0 1
1 0 0 1 0 0 0 0
*/

#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main(){
    char tabuleiro[tam][tam]={0};
    int linhaB, colunaB, linhaT, colunaT;
    printf("Digite a posicao do bispo:\n");
    scanf("%d", &linhaB);
    scanf("%d", &colunaB);
    printf("Digite a posicao da torre:\n");
    scanf("%d", &linhaT);
    scanf("%d", &colunaT);

    linhaB-=1;
    colunaB-=1;
    linhaT-=1;
    colunaT-=1;

    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(tabuleiro[i][j]=='1'){
                printf("2");
            }
            if(i==linhaB &&j==colunaB){
                printf("B");
            }else if(i+j==linhaB+colunaB ||i-j==linhaB-colunaB){
                printf("1");
            }
            if(i==linhaT &&j==colunaT){
                printf("T");
            }else if(i==linhaT &&(linhaT+1 &&colunaT+1)){
                printf("1");
            }else if(j==colunaT &&(linhaT-1 &&colunaT-1)){
                printf("1");
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
    /*
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(i==linhaT &&j==colunaT){
                printf("T");
            }else if(i==linhaT &&(linhaT+1 &&colunaT+1)){
                printf("1");
            }else if(j==colunaT &&(linhaT-1 &&colunaT-1)){
                printf("1");
            }else{
                printf("-");
            }
        }
        printf("\n");
    }
    */
    return 0;

}
/*
for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (i == linha && j == coluna)
            {
                // Imprime o bispo
                printf("B ");
            }
            else if (i + j == linha + coluna || i - j == linha - coluna)
            {
                // Imprime o domínio do bispo
                printf("X ");
            }
            else
            {
                // Imprime um espaço vazio
                printf(". ");
            }
        }
*/