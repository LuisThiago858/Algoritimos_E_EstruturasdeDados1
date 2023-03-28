/*
Lido um número inteiro n, n > 1, crie uma função e verique se o número é primo. Imprima n e, P se for ou N caso não seja primo. 

Exemplos de Entrada e Saída
Entrada	
7
Saída	
7 P
*/
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
	if (n <= 1)
		return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) 
			return false;
	}
	return true;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d ", n);
	if (is_prime(n)) {
		printf("P\n");
	} else {
		printf("N\n");
	}
	return 0;
}