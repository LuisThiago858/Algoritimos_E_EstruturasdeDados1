/*3.(2.0 Ptos) Lidas a posição (linha e coluna) de um Bispo apresente o domínio em um tabuleiro
de Xadrez com a peça B evidenciada nas coordenadas lidas.*/
// Online C compiler to run C program online
#include <stdio.h>

#define TAM 8 // Tamanho do tabuleiro de xadrez (8x8)

int main(void)
{
    // Declara variáveis para armazenar as coordenadas da peça
    int linha, coluna;

    // Cria o tabuleiro de xadrez como uma matriz de caracteres
    char tabuleiro[TAM][TAM] = {0};

    // Lê as coordenadas da peça
    printf("Insira a linha da peça: ");
    scanf("%d", &linha);
    printf("Insira a coluna da peça: ");
    scanf("%d", &coluna);
    linha -= 1;
    coluna -= 1;
    // Insere o bispo no tabuleiro
    tabuleiro[linha][coluna] = 'B';

    // Imprime o tabuleiro com o bispo e o domínio deste
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
        printf("\n");
    }

    return 0;
}
/*
#include <stdio.h>
#define tam 8
int main() {
    int PosL, PosC, a, b;
    char tabuleiro[tam][tam]={{'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'},
                              {'-','-','-','-','-','-','-','-'}};

    printf("Digite a linha:\n");
    scanf("%d", &PosL);
    printf("Digite a coluna:\n");
    scanf("%d", &PosC);

    PosL-=1;
    PosC-=1;


    tabuleiro[PosL][PosC]='B';
    for(int l=0;l<tam;l++){
        printf("%c", tabuleiro[l][tam-1-l]='l');
    }
    for(int l=0;l<tam;l++){
        printf("%c", tabuleiro[l][l]='*');
    }
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/