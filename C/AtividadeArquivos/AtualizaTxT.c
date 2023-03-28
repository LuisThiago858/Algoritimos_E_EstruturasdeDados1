#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *pont_arqui;
    int r;
    
    pont_arqui=fopen("arquivoXY.txt", "w");//abre o arquivo para escrita
    if(pont_arqui==NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    r=fputs("A vida é curta demais para deixarmos de perseguir nossos sonhos e metas.", pont_arqui);
    
    if(r==EOF){
        printf("erro ao tentar gravar os dados\n");
    }
    else{
        printf("Dados gravados com sucesso\n");
    }
    fclose(pont_arqui);
    printf("Algo foi escrito no arquivo TXT.\n");

    

    return 0;
}