#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
    struct cel *ant;
} celula;

void inserir_inicio(celula **cabeca, int conteudo)
{

    celula *nova_cel = (celula *)malloc(sizeof(celula));

    if (nova_cel == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return;
    }
    nova_cel->conteudo = conteudo;

    nova_cel->prox = *cabeca;
    nova_cel->ant = NULL;
    (*cabeca)->ant = nova_cel;
    *cabeca = nova_cel;
}

void inserir_fim(celula **ptr_head, int conteudo)
{
    celula *nova_cel = (celula *)malloc(sizeof(celula));
    nova_cel->prox = NULL;
    nova_cel->conteudo = conteudo;

    celula *aux = *ptr_head;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    nova_cel->ant = aux;
    aux->prox = nova_cel;
}

void imprimir(celula *ptr_head)
{
    celula *aux = ptr_head;
    printf("Head: %p\n", ptr_head);
    while (aux != NULL)
    {
        printf("=========================\n");
        printf("Conteudo: %d\n", aux->conteudo);
        printf("Ant: %p\n", aux->ant);
        printf("Endereco: %p\n", aux);
        printf("Prox: %p\n", aux->prox);
        aux = aux->prox;
    }
}

int main()
{
    celula *cabeca = NULL;
    inserir_fim(&cabeca, 10);
    inserir_fim(&cabeca, 20);
    inserir_fim(&cabeca, 30);
    imprimir(cabeca);

    return 0;
}
