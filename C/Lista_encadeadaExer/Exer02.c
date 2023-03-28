/*
Lida uma string imprima seus caracteres em ordem alfabética

itacoatiara

aaaaciiortt
*/

#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int i, j;
    char temp;
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}