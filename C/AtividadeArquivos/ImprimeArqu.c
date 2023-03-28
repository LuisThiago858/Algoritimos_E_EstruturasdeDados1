#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *pont_arqui;
    char text_str[100];
    printf("\n-----O que está escrito no arquivo é...------\n");

    pont_arqui=fopen("arquivoXY.txt", "r");//abre o arquivo para leitura
    //varre o arquivo e salva o que está nela para uma variavel text_str

    while(fgets(text_str, 100, pont_arqui)!=NULL){
        printf("%s\n", text_str);
    }

    return 0;
}



