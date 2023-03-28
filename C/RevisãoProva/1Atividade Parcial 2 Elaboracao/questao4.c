/*
Lidas as posições de um Bispo e de uma Torre, peças do jogo de Xadrez, represente as 
 casas dominadas pelas peças pelo número 1. As casas que são dominadas ao mesmo tempo pelo 
 Bispo e pela Torre devem ser marcadas com 2. Imprima B na posição correspondente lida.
  Idem para a Torre.
*/

#include <stdio.h>

int main() {
    // cria uma matriz de caracteres 8x8 para representar o tabuleiro de xadrez
    char tabuleiro[8][8];
    
    // inicializa o tabuleiro com espaços em branco
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            tabuleiro[i][j] = '_';
        }
    }
    
    // lê a posição do bispo
    int bispo_linha, bispo_coluna;
    printf("Digite a posição do bispo (linha coluna): ");
    scanf("%d %d", &bispo_linha, &bispo_coluna);
    bispo_linha--; // ajusta a posição para o índice da matriz
    bispo_coluna--;
    
    // marca a posição do bispo no tabuleiro

    
    // lê a posição da torre
    int torre_linha, torre_coluna;
    printf("Digite a posição da torre (linha coluna): ");
    scanf("%d %d", &torre_linha, &torre_coluna);
    torre_linha--; // ajusta a posição para o índice da matriz
    torre_coluna--;
    
    // marca a posição da torre no tabuleiro
    tabuleiro[torre_linha][torre_coluna] = 'T';
    
    // marca o domínio do bispo
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i==bispo_linha && j==bispo_coluna){
                tabuleiro[bispo_linha][bispo_coluna] = 'B';
            }
            if( (i - j == bispo_linha - bispo_coluna) || 
               (i + j == bispo_linha + bispo_coluna)) {
                tabuleiro[i][j] = '1';
            }
        }
    }
    
    // marca o domínio da torre
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i== torre_linha && j ==torre_coluna){
                tabuleiro[torre_linha][torre_coluna] = 'T';
            }
            if(i == torre_linha || j == torre_coluna) {
                tabuleiro[i][j] = '1';
            }
        }
    }


    // marca a posição onde os domínios se encontram
    if(tabuleiro[bispo_linha][torre_coluna] == '1') {
        tabuleiro[bispo_linha][torre_coluna] = '2';
    }
    if(tabuleiro[torre_linha][bispo_coluna] == '1') {
        tabuleiro[torre_linha][bispo_coluna] = '2';
    }
    
    // exibe o tabuleiro
    printf("\n  A B C D E F G H\n");
    for(int i = 0; i < 8; i++) {
        printf("%d", i+1);
        for(int j = 0; j < 8; j++) {
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

