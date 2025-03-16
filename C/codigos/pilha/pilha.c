/*
▪Implementar os métodos abaixo para Pilha estática e
dinâmica de forma que seja possível utilizar qualquer
uma das duas de maneira abstrata
▪Empilhar (push)
▪Desempilhar (pop)
▪Tamanho da Pilha (size)
▪Esvaziar Pilha (empty)
▪Posição de um elemento na Pilha
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
} celula;

typedef struct
{
    celula *topo;
    int tam;
} head;

void push(celula **topo, int conteudo)
{
    celula *novo = (celula *)malloc(sizeof(celula));
    novo->conteudo = conteudo;
    novo->prox = NULL;

    novo->prox = *topo;
    *topo = novo;

    return;
}

void pop(celula **topo)
{

    if (*topo == NULL)
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    celula *pop = NULL;
    pop = *topo;
    *topo = pop->prox;
    free(pop);
    return;
}

int size(celula *topo)
{
    celula *aux = topo;
    int cont = 0;

    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }

    return cont;
}

void posicao(head cabeca, int conteudo)
{
    if (cabeca.topo == NULL)
    {
        printf("\nA FILA ESTA VAZIA!!!\n");
        return;
    }

    celula *aux = cabeca.topo;
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
    return ;
}

void esvaziar(celula **topo)
{
    if (*topo == NULL)
    {
        printf("\nA PILHA ESTA VAZIA!!!\n");
        return;
    }

    int cont = 1;

    while (*topo != NULL)
    {
        pop(topo);
        printf("Item %d foi removido!!!\n", cont);
        cont++;
    }

    *topo = NULL;
    printf("Pilha esvaziada com sucesso!!!\n");
    return;
}

void imprimir(celula *topo)
{
    if (topo == NULL)
    {
        printf("\nA PILHA ESTA VAZIA!!!\n");
        return;
    }
    
    celula *aux = topo;
    printf("Topo: %p\n", topo);
    while (aux != NULL)
    {

        printf("+-----------------------+\n");
        printf("|Conteudo: %d\n", aux->conteudo);
        printf("|Endereco: %p\n", aux);
        printf("|Prox: %p\n", aux->prox);
        printf("+-----------------------+\n");

        aux = aux->prox;
    }
}

void menu()
{
    printf("---------MENU---------\n");
    printf("[1] Push\n");
    printf("[2] Pop\n");
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
    head cabeca;
    cabeca.topo = NULL;
    cabeca.tam = 0;

    while (run)
    {
        int conteudo = 0;

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
            push(&(cabeca.topo), conteudo);
            cabeca.tam += 1;
            break;
        case 2:
            pop(&(cabeca.topo));
            cabeca.tam -= 1;
            break;
        case 3:
            imprimir(cabeca.topo);
            break;
        case 4:
            printf("Tamanho: %d\n", cabeca.tam);
            break;
        case 5:
            printf("Busque por um item: ");
            scanf("%d", &conteudo);
            getchar();
            posicao(cabeca, conteudo);
            break;
        case 6:
            esvaziar(&cabeca.topo);
            cabeca.tam = 0;
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