#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
    struct cel *ant;
} celula;

void inserir_inicio(celula **ptr_head, int conteudo)
{

    celula *nova_cel = (celula *)malloc(sizeof(celula));

    if (*ptr_head == NULL)
    {
        *ptr_head = nova_cel;
        nova_cel->conteudo = conteudo;
        nova_cel->ant = NULL;
        nova_cel->prox = NULL;
        return;
    }

    nova_cel->conteudo = conteudo;

    nova_cel->prox = *ptr_head;
    nova_cel->ant = NULL;
    (*ptr_head)->ant = nova_cel;
    *ptr_head = nova_cel;
}

void inserir_fim(celula **ptr_head, int conteudo)
{
    celula *nova_cel = (celula *)malloc(sizeof(celula));
    nova_cel->prox = NULL;
    nova_cel->conteudo = conteudo;

    if (*ptr_head == NULL)
    {
        *ptr_head = nova_cel;
        nova_cel->ant = NULL;
        return;
    }

    celula *aux = *ptr_head;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    nova_cel->ant = aux;
    aux->prox = nova_cel;
}

// void remover

celula *concatenar(celula *ptr_head1, celula *ptr_head2)
{
    if (ptr_head1 == NULL || ptr_head2 == NULL)
    {
        return NULL;
    }

    celula *aux = ptr_head1;

    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = ptr_head2;
    ptr_head2->ant = aux;

    return ptr_head1;
}

void imprimir(celula *ptr_head)
{
    celula *aux = ptr_head;
    printf("Head: %p\n", ptr_head);
    while (aux != NULL)
    {

        printf("+-----------------------+\n");
        printf("|Conteudo: %d\n", aux->conteudo);
        printf("|Ant: %p\n", aux->ant);
        printf("|Endereco: %p\n", aux);
        printf("|Prox: %p\n", aux->prox);
        printf("+-----------------------+\n");

        aux = aux->prox;
    }
}

int main()
{
    celula *cabeca = NULL;
    celula *cabeca2 = NULL;
    inserir_inicio(&cabeca, 10);
    inserir_inicio(&cabeca, 20);
    inserir_inicio(&cabeca, 30);

    inserir_fim(&cabeca2, 10);
    inserir_fim(&cabeca2, 20);
    inserir_fim(&cabeca2, 30);

    printf("\nLista 1: \n");
    imprimir(cabeca);
    printf("\nLista 2: \n");
    imprimir(cabeca2);

    celula *cabeca3 = NULL;
    cabeca3 = concatenar(cabeca, cabeca2);

    printf("\nLista Concatenada: \n");
    imprimir(cabeca3);

    return 0;
}
