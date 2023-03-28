/*
Conte a frequência da palavra “que” em uma string lida.

Exemplos de Entrada e Saída
Entrada	
o pescador que era de maués perdeu a rede que era de nylon.
Saída	
2
*/

#include <string.h>

int main() {
    char str[100];
    int count = 0;
    scanf("%[^\n]s", &str);

    for (int i = 0; i < strlen(str) - 2; i++) {
        if (str[i] == 'q' && str[i + 1] == 'u' && str[i + 2] == 'e' && str[i+3]==' ') {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}