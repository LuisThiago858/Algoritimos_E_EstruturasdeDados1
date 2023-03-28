#include <stdio.h>
#include <stdlib.h>

char jogoDaVelha[3][3];
int l, c;
//procedimento para inicializar todas as posicoes da matriz
void iniciarJogo(){
    for(l=0;l<3;l++){
        for(c=0; c<3; c++){
            jogoDaVelha[l][c]=' ';  //posicao vazia  
        }
    }
}
//Mostra o jogo da velha e seus indices
void mostrarJogo(){
    printf("\n\n\t  0   1    2\n\n");
    for(l=0;l<3;l++){
        for(c=0; c<3; c++){
            if(c==0){
                printf("\t");
            }
            printf(" %c  ", jogoDaVelha[l][c]);
            if(c<2){
                printf("|");
            }
            if(c==2){
                printf("  %d", l);
            }
        }
        printf("\n");
        if(l<2){
            printf("\t---------------\n");
        }
    }
}

//funcao para verificar vitoria por linha
int vitoriaPorLinha(int l, char compl){
    if(jogoDaVelha[l][0] == compl && jogoDaVelha[l][1] == compl && jogoDaVelha[l][2]==compl){
        return 1;//ganhou
    }else{
        return 0;//nao ganhou
    }
}
//funcao para verificar vitoria por linhas
int vitoriaPorLinhass(char compl){
    int ganhou=0; //variavel comeca com 0
    for(l=0;l<3;l++){
        ganhou+=vitoriaPorLinha(l, compl);// se ao menos uma vitoria por linha ocorrer essa variavel ganha +1
    }
    return ganhou;
}
//funcao para verificar vitoria por uma coluna
int vitoriaPorColuna(int c, char compl){
    if(jogoDaVelha[0][c]==compl &&jogoDaVelha[1][c]==compl &&jogoDaVelha[2][c]==compl){
        return 1;
    }else{
        return 0;
    }
}
//funcao para verificar vitoria por todas as colunas
int vitoriaPorColunass(char compl){
    int ganhou=0;
    for(c=0;c<3;c++){
        ganhou+=vitoriaPorColuna(c, compl);
    }
    return ganhou;
}

//funcao para verificar vitoria na diagonal principal
int vitoriaNaDiagonalP(char compl){
    if(jogoDaVelha[0][0]==compl &&jogoDaVelha[1][1]==compl &&jogoDaVelha[2][2]==compl){
        return 1;
    }else{
        return 0;
    }
}
//funcao para verificar vitoria na diagonal secundaria
int vitoriaNaDiagonalS(char compl){
    if(jogoDaVelha[0][2]==compl &&jogoDaVelha[1][1]==compl &&jogoDaVelha[2][0]==compl){
        return 1;
    }else{
        return 0;
    }
}

//funcao para validar as linhas e as colunas
int ehValido(int l, int c){
    if(l>=0 && l<3 && c>=0 && c<3 && jogoDaVelha[l][c]==' '){
        return 1; //esta cordenada e valida e se ela esta sobre uma posicão vazia
    }else{
        return 0;
    }
}

//procedimento para ler as cordenadas
void lerCoordenadas(char jogador){
    int lin, col;
    printf("Digite a linha e coluna: \n");
    scanf("%d%d", &lin, &col);

    //verificar se essa posicao e valida continuamente
    while(!ehValido(lin, col)){
        printf("Cordenadas invalida, digite a linha e coluna: \n");
        scanf("%d%d", &lin, &col);
    }
    //salvar a cordenada na posicao
    jogoDaVelha[lin][col] = jogador;
}

//funcao para retornar a quantidade de posicoes vazias em caso de empate
int quantVazias(){
    int contadorDeVazios=0;
    for(l=0; l<2; l++){
        for(c=0; c<2; c++){
            if(jogoDaVelha[l][c]==' '){
                contadorDeVazios++;//signfica que ainda tem posicoes vazias
            }
        }
    }
    return contadorDeVazios;
}

//procedimento jogar com o loop principal do jogo
void jogar(){
    int jogador = 1, vitoriaX=0, vitoriaO=0;
    char jogador1='X', jogador2='O';
    
    do{
        mostrarJogo();//cada vez que o jogo for feito ele mostra a situacao atual do jogo
        if(jogador==1){
            lerCoordenadas(jogador1);
            jogador++;//o proximo a jogar será o 2 com 'O'
            //
            vitoriaX+=vitoriaPorLinhass(jogador1);
            vitoriaX+=vitoriaPorColunass(jogador1);
            vitoriaX+=vitoriaNaDiagonalP(jogador1);
            vitoriaX+=vitoriaNaDiagonalS(jogador1);


        }else{
            lerCoordenadas(jogador2);
            jogador=1;//o proximo a jogar será o 1 com 'X'
            vitoriaO+=vitoriaPorLinhass(jogador2);
            vitoriaO+=vitoriaPorColunass(jogador2);
            vitoriaO+=vitoriaNaDiagonalP(jogador2);
            vitoriaO+=vitoriaNaDiagonalS(jogador2);
        }
        //enquanto o jogador1 nao ganhar e o jogador2 nao ganhar e quantVazias for maior que zero repita
    }while(vitoriaX==0 && vitoriaO==0 && quantVazias()>0);

    if(vitoriaX==1){
        printf("\n Jogador 1 ganhou!! \n");
    }
    else if(vitoriaO==1){
        printf("\n Jogador 1 ganhou!! \n");
    }else{
        printf("\n Nenhum jogador ganhou \n");
    }
}

int main(){
    int opcao;
    do{
        iniciarJogo();
        jogar();

        printf("\nDigite 1 para jogar novamente: ");
        scanf("%d", &opcao);
    }while(opcao == 1);
    
    return 0;
}