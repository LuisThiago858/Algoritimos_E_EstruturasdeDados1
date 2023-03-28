/*
    Lidas duas strings verifique se a primeira string é sufixo da
    segunda string. Se for verdade imprima S, caso contrário imprima N.

    pir
    pirara

    S
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Insira a primeira string: ");
    scanf("%s", &str1);
    printf("Insira a segunda string: ");
    scanf("%s", &str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2) {
        printf("N\n");
        return 0;
    }

    int i, j;
    for (i = len2 - 1, j = len1 - 1; j >= 0; i--, j--) {
        if (str2[i] != str1[j]) {
            printf("N\n");
            return 0;
        }
    }

    printf("S\n");
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[100], string2[100];
    int tam1, tam2, i, j, flag = 0;

    scanf("%s", string1);
    scanf("%s", string2);

    tam1 = strlen(string1);
    tam2 = strlen(string2);

    for (i = tam2 - tam1, j = 0; i < tam2; i++, j++)
    {
        if (string1[j] != string2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}