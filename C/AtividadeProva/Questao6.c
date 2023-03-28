/*
Enunciado
Crie um array de 10 caracteres. Preencha os elementos do array com o caracter "0". Leia um valor inteiro n, n > 0. Aloque o caracter "R" randomicamente no array, e, em seguida, aloque o caracter "S", em uma casa diferente de P. Imprima n e o array.

IMPORTANTE

Há várias possibilidades de saidas corretas. A questão será corrigida pelo professor e não automaticamente pelo CodeBench.

Dicas
Sugestão: Use as funções RAND ou SRAND.

Exemplos de Entrada e Saída
Entrada	
1
Saída	
1 00R000S0
Entrada	
0
Saída	
Erro
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main() {
	int n;
	char arr[MAX] = {'0','0','0','0','0','0','0','0','0','0'};
	int i, aleat1, aleat2;
	scanf("%d", &n);
	if (n <= 0) {
		printf("Erro\n");
		return 0;
	}
	srand(time(NULL));
	aleat1 = rand() % MAX;
	arr[aleat1] = 'R';
	do {
		aleat2 = rand() % MAX;
	} while (aleat2 == aleat1);
		arr[aleat2] = 'S';
	printf("%d ", n);
	for (i = 0; i < MAX; i++) {
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}