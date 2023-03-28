#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

struct lista
{
    char info;
    Lista *prox;
};

Lista *lst_cria(void)
{
    return NULL;
}

Lista *lst_insere(Lista *lst, int val)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    novo->info = val;
    novo->prox = lst;
    return novo;
}
void lst_imprime(Lista *lst)
{
    Lista *p;
    for (p = lst; p != NULL; p = p->prox)
    {
        printf("info : %d\n", p->info);
    }
}

int main(void)
{
    int i, n;
    Lista *lst;
    lst = lst_cria();
    for (i = 0; i < 4; i++)
    {
        printf(" ");
        scanf("%d", &n);
        lst = lst_insere(lst, n);
    }
    lst_imprime(lst);
    return 0;
}