/* Implementar os métodos abaixo para Fila estática e
dinâmica de forma que seja possível utilizar qualquer
uma das duas de maneira abstrata
▪Enfileirar
▪Desenfileirar
▪Tamanho da Fila
▪Esvaziar Fila
▪Posição de um elemento na Fila */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct cel
{
    struct cel *prox;
    int conteudo;
} celula;

int Is_empty(celula *first)
{
    if (first == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void imprimir(celula *first, celula *last)
{
    if (Is_empty(first))
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    celula *aux = first;
    printf("First: %p \n", first);
    while (aux != NULL)
    {
        printf("+-----------------------+\n");
        printf("|Conteudo: %d\n", aux->conteudo);
        printf("|Endereco: %p\n", aux);
        printf("|Prox: %p\n", aux->prox);
        printf("+-----------------------+\n");
        aux = aux->prox;
    }
    printf("Last: %p \n", last);
    return;
}

void enfileirar(celula **first, celula **last, int conteudo)
{
    celula *novo = (celula *)malloc(sizeof(celula));
    novo->conteudo = conteudo;
    novo->prox = NULL;

    if (Is_empty(*first))
    {
        *first = novo;
        *last = novo;
        return;
    }

    (*last)->prox = novo;
    *last = novo;
    return;
}

void desenfileirar(celula **first)
{
    if (Is_empty(*first))
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    celula *front = *first;
    *first = (*first)->prox;
    free(front);
}

void esvaziar(celula **first)
{
    if (Is_empty(*first))
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    int cont = 1;

    while (*first != NULL)
    {
        desenfileirar(first);
        printf("Item %d foi removido!!!\n", cont);
        cont++;
    }

    printf("Lista esvaziada com sucesso!!!\n");
    return;
}

int size(celula *first)
{
    int cont = 0;

    if (Is_empty(first))
    {
        return 0;
    }

    celula *aux = first;
    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }
    return cont;
}

void posicao(celula *first, int conteudo)
{
    if (Is_empty(first))
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    celula *aux = first;
    int cont = 1;
    while (aux != NULL)
    {
        if (aux->conteudo == conteudo)
        {
            printf("Item na posicao : %d\n", cont);
            return;
        }

        cont++;
        aux = aux->prox;
    }

    printf("Item nao enconredo!!!\n");
    return;
}

void menu()
{
    printf("---------MENU---------\n");
    printf("[1] Enfileirar\n");
    printf("[2] Desenfileirar\n");
    printf("[3] Imprimir\n");
    printf("[4] Tamanho\n");
    printf("[5] Buscar\n");
    printf("[6] Esvaziar\n");
    printf("[0] Sair\n");
    printf("----------------------\n");
    return;
}

int main()
{
    int run = 1;
    celula *first = NULL;
    celula *last = NULL;

    while (run)
    {
        int conteudo = 0;
        int tam = 0;

        menu();

        int op;
        printf("digite uma opcao: ");
        scanf("%d", &op);
        getchar();
        switch (op)

        {
        case 1:
            printf("Conteudo: ");
            scanf("%d", &conteudo);
            getchar();
            enfileirar(&first, &last, conteudo);
            break;
        case 2:
            desenfileirar(&first);
            break;
        case 3:
            imprimir(first, last);
            break;
        case 4:
            tam = size(first);
            printf("Tamanho: %d\n", tam);
            break;
        case 5:
            printf("Busque por um item: ");
            scanf("%d", &conteudo);
            getchar();
            posicao(first, conteudo);
            break;
        case 6:
            esvaziar(&first);
            break;
        case 0:
            run = 0;
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }

        printf("\nPressione Enter para continuar...\n");
        getchar();
        system("cls");
    }

    return 0;
}