#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct doc{
    char* titulo; // Até 50 caracteres
    char* extensao; // Até 3 caracteres
    struct doc* prox;
    struct doc* ant;
}Documento;

typedef struct{
    Documento* inicio;
    Documento* fim;
    Documento* topo;
    int tam;
}Fila;

void inicializa_fila(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->topo = NULL;
    f->tam = 0;
}

void adiciona_documento(Fila *f, char *titulo, char *extensao){
    Documento *novo = (Documento *)malloc(sizeof(Documento));
    novo->titulo = (char *)malloc(50 * sizeof(char));
    novo->extensao = (char *)malloc(3 * sizeof(char));
    strcpy(novo->titulo, titulo);
    strcpy(novo->extensao, extensao);
    novo->prox = NULL;
    novo->ant = NULL;
    if(f->inicio == NULL){
        f->inicio = novo;
        f->fim = novo;
    }
    else{
        novo->ant = f->fim;
        f->fim->prox = novo;
        f->fim = novo;
    }
    f->tam++;
}

void imprime_documento(Fila *f, int *contador_impresso, int *qtd_papel){
    if(*qtd_papel > 0){
        if (f->inicio == NULL || f->inicio->titulo == NULL || f->inicio->extensao == NULL) {
            printf("ERROR_DOCUMENTO_INVALIDO\n");
            return;
        }
        Documento *temp = f->inicio;
        printf("IMPRIMINDO %d: %s .%s\n", *contador_impresso, temp->titulo, temp->extensao);
        *contador_impresso = *contador_impresso + 1;
        *qtd_papel = *qtd_papel - 1;
        f->inicio = temp->prox;
        free(temp);
        f->tam--;
    }
    else{
        printf("ERROR_SEM_PAPEL\n");
    }
}


void desempilha_documento(Fila *f){
    if(f->tam > 0){
        Documento *temp = f->fim;
        printf("DESEMPILHANDO %d: %s.%s\n", f->tam, temp->titulo, temp->extensao);
        f->fim = temp->ant;
        free(temp);
        f->tam--;
    }
}

int main(){
    Fila fila;
    inicializa_fila(&fila);
    int qtd_papel, contador_impresso = 1;
    scanf("%d", &qtd_papel);
    fflush(stdin);
    char titulo[50], extensao[3];
    while(1){
        scanf("%s", titulo);
        if(strcmp(titulo, "EXIT") == 0){
            break;
        }
        scanf("%s", extensao);
        adiciona_documento(&fila, titulo, extensao);
        fflush(stdin);
    }

    Documento *temp = fila.inicio;
    while(temp != NULL){
        if(qtd_papel > 0){
            imprime_documento(&fila, &contador_impresso, &qtd_papel);
        }
        else{
            break;
        }
        temp = fila.inicio;
    }

    while(fila.tam > 0){
        desempilha_documento(&fila);
    }

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO_LENGTH 50
#define MAX_EXTENSAO_LENGTH 3

typedef struct doc
{
    char *titulo;   // Até 50 caracteres
    char *extensao; // Até 3 caracteres
    struct doc *prox;
    struct doc *ant;
} Documento;

typedef struct
{
    Documento *inicio;
    Documento *fim;
    Documento *topo;
    int tam;
} Fila;

Documento *criarDocumento(char *titulo, char *extensao)
{
    Documento *novo = (Documento *)malloc(sizeof(Documento));
    novo->titulo = (char *)malloc(sizeof(char) * (MAX_TITULO_LENGTH + 1));
    novo->extensao = (char *)malloc(sizeof(char) * (MAX_EXTENSAO_LENGTH + 1));
    strcpy(novo->titulo, titulo);
    strcpy(novo->extensao, extensao);
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

Fila *criarFila()
{
    Fila *nova = (Fila *)malloc(sizeof(Fila));
    nova->inicio = NULL;
    nova->fim = NULL;
    nova->topo = NULL;
    nova->tam = 0;
    return nova;
}

void enfileirar(Fila *fila, Documento *documento)
{
    if (fila->tam == 0)
    {
        fila->inicio = documento;
        fila->fim = documento;
        fila->topo = documento;
    }
    else
    {
        fila->fim->prox = documento;
        documento->ant = fila->fim;
        fila->fim = documento;
    }
    fila->tam++;
}

Documento *desenfileirar(Fila *fila)
{
    Documento *documento = fila->inicio;
    fila->inicio = fila->inicio->prox;
    fila->tam--;
    return documento;
}

void imprimir(Documento *documento)
{
    printf("IMPRIMINDO %d: %s.%s\n", fila->tam, documento->titulo, documento->extensao);
}

void desempilhar(Fila *fila)
{
    while (fila->tam > 0)
    {
        Documento *documento = desenfileirar(fila);
        printf("DESEMPILHANDO %d: %s.%s\n", fila->tam + 1, documento->titulo, documento->extensao);
        free(documento);
    }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITULO 50
#define MAX_EXTENSAO 3

typedef struct doc{
    char* titulo;
    char* extensao;
    struct doc* prox;
    struct doc* ant;
}Documento;

typedef struct{
    Documento* inicio;
    Documento* fim;
    int tam;
}Fila;

Documento* criarDocumento(char* titulo, char* extensao){
    Documento* novo = (Documento*)malloc(sizeof(Documento));
    novo->titulo = (char*)malloc((strlen(titulo)+1)*sizeof(char));
    strcpy(novo->titulo, titulo);
    novo->extensao = (char*)malloc((strlen(extensao)+1)*sizeof(char));
    strcpy(novo->extensao, extensao);
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

void adicionarFila(Fila* fila, Documento* doc){
    if(fila->inicio == NULL){
        fila->inicio = doc;
        fila->fim = doc;
        fila->tam = 1;
    }
    else{
        fila->fim->prox = doc;
        doc->ant = fila->fim;
        fila->fim = doc;
        fila->tam++;
    }
}

void imprimirDocumento(Documento* doc){
    printf("IMPRIMINDO: %s.%s\n", doc->titulo, doc->extensao);
}

void desempilharDocumento(Fila* fila){
    Documento* doc = fila->inicio;
    printf("DESEMPILHANDO: %s.%s\n", doc->titulo, doc->extensao);
    fila->inicio = fila->inicio->prox;
    if (fila->inicio != NULL) {
        fila->inicio->ant = NULL;
    }
    fila->tam--;
    free(doc->titulo);
    free(doc->extensao);
    free(doc);
}


int main(){
    int qtdPapel;
    printf("Digite a quantidade de papéis a serem impressos: ");
    scanf("%d", &qtdPapel);
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tam = 0;

    char titulo[MAX_TITULO];
    char extensao[MAX_EXTENSAO];
    int i;
    for(i = 0; i < qtdPapel; i++){
        printf("Digite o título do %dº documento: ", i+1);
        scanf("%s", titulo);
        printf("Digite a extensão do %dº documento: ", i+1);
        scanf("%s", extensao);
        Documento* doc = criarDocumento(titulo, extensao);
        adicionarFila(fila, doc);
    }

    printf("\nImprimindo documentos...\n");
    while(fila->tam > 0){
        Documento* doc = fila->inicio;
        imprimirDocumento(doc);
        desempilharDocumento(fila);
    }

    return 0;
}
*/