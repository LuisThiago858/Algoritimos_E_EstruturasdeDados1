#include <stdio.h>

int main() {
    int a, b;
    char matriz[8][8]={{'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',},
                       {'-', '-', '-', '-', '-', '-', '-', '-',}
                      };
    scanf("%d%d", &a, &b);
    a-=1;
    b-=1;
    
    for(int m=0; m<8; m++){
        for(int n=0; n<8; n++){
            matriz[a][b]='R';//posicao do rei
            
            matriz[a-1][b]='*';//superior
            matriz[a-1][b-1]='*';//diagonal superior esquerda
            matriz[a-1][b+1]='*';//diagonal superior direita
            matriz[a][b-1]='*';//esquerda
            matriz[a][b+1]='*';//direita
            matriz[a+1][b]='*';//inferior
            matriz[a+1][b+1]='*';//diagonal inferior direita
            matriz[a+1][b-1]='*';//diagonal inferior esquerda
            printf("%c", matriz[m][n]);
        }
        printf("\n");
    }
    
    return 0;
}