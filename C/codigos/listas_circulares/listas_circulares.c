#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
} celula;

void inserir(celula **cabeca, int conteudo)
{
    celula *nova = (celula *)malloc(sizeof(celula));
    nova->prox = NULL;
    nova->conteudo = conteudo;

    if (*cabeca == NULL)
    {   
        nova->prox = nova;
        *cabeca = nova;
        return;
    }

    celula *aux = *cabeca;
    while (aux->prox != *cabeca)
    {
        aux = aux->prox;
    }

    aux->prox = nova;
    nova->prox = *cabeca;

    return;
}

void imprimir(celula *cabeca)
{
    if (cabeca == NULL)
    {
        return;
    }

    celula *aux = cabeca;
    printf("Head: %p\n", cabeca);

    do
    {
        printf("+-----------------------+\n");
        printf("|Conteudo: %d\n", aux->conteudo);
        printf("|Endereco: %p\n", aux);
        printf("|Prox: %p\n", aux->prox);
        printf("+-----------------------+\n");
        aux = aux->prox;
    
    }while (aux != cabeca);
}

int main()
{
    celula *header = NULL;

    inserir(&header, 10);
    inserir(&header, 20);
    inserir(&header, 30);
    inserir(&header, 40);
    inserir(&header, 50);

    imprimir(header);
    return 0;
}
