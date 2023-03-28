#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *pont_arqui;
    pont_arqui=fopen("arquivoXY.txt", "a");
    if(pont_arqui==NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    fclose(pont_arqui);
    printf("Arquivo criado com sucesso!!\n");
    return 0;
}