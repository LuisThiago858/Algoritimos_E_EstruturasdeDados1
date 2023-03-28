/*Conte as pecas em uma string que representa uma posicao FEN do Xadrez
K-king Q-queen R-rook N-knight B-bispo P-piao*/
#include <stdio.h>
#include <string.h>

int main(){
	char fen[100];
	int i, contRei = 0, contRainha=0, contTorre=0, contCavalo=0, contBispo=0, contPeao=0, tam;
	
	gets(fen);
	tam=strlen(fen);
	for(i = 0; i < tam; i++){
		if(fen[i] == 'k' || fen[i] == 'K'){
			contRei++;
		}
		else if(fen[i] == 'q' || fen[i] == 'Q'){
			contRainha++;
		}
		else if(fen[i] == 'r' || fen[i] == 'Q'){
			contTorre++;
		}
		else if(fen[i] == 'n' || fen[i] == 'N'){
			contCavalo++;
		}
		else if(fen[i] == 'b' || fen[i] == 'B'){
			contBispo++;
		}
		else if(fen[i] == 'p' || fen[i] == 'P'){
			contPeao++;
		}
	
	}
	
	printf("O número de pecas reis é: %d\n", contRei);
	printf("O número de pecas rainhas é: %d\n", contRainha);
	printf("O número de pecas torres é: %d\n", contTorre);
	printf("O número de pecas cavalo é: %d\n", contCavalo);
	printf("O número de pecas bisbo é: %d\n", contBispo);
	printf("O número de pecas peoes é: %d\n", contPeao);
	
	return 0;
}