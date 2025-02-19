/*
Atividade
▪Implemente as funções descritas abaixo sobre listas encadeadas duplas
 1 - Localizar um elemento da lista e trocar de posição com o próximo
 2 - Receber duas listas e concatenar em uma só
 3 - Receber uma lista e dividir em duas na metade
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *ant;
    struct cel *prox;
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

void trocar(celula *cabeca, int conteudo)
{
    celula *aux = cabeca;
    while (aux != NULL)
    {
        if (aux->conteudo == conteudo)
        {
            break;
        }
        else
        {
            aux = aux->prox;
        }
    }

    if (aux == NULL || aux->prox == NULL)
    {
        printf("\nNao e possivel fazer a troca !!!");
        return;
    }

    celula *proximo = aux->prox;

    aux->prox = proximo->prox;
    proximo->ant = aux->ant;

    if (aux->prox != NULL)
    {
        aux->prox->ant = aux;
    }

    if (aux->ant != NULL)
    {
        aux->ant->prox = proximo;
    }

    proximo->prox = aux;
    aux->ant = proximo;

    return;
}

int cont(celula *cabeca)
{   
    int cont = 0;

    celula *aux = cabeca;
    while (aux != NULL)
    {
        cont++;
        aux = aux->prox;
    }

    return cont;
}

celula * dividir(celula *cabeca)
{   
    if (cabeca == NULL)
    {
        return NULL;
    }
    
    int contador = cont(cabeca);

    if (contador % 2 == 0)
    {
        contador = contador / 2;
    }
    else
    {
        contador = (contador + 1) / 2;
    }

    int contador2 = 0;
    celula *aux = cabeca;

    while (contador2 < contador)
    {
        contador2++;
        aux = aux->prox;
    }

    celula *cabeca2;

    aux->ant->prox = NULL;
    aux->ant = NULL;
    cabeca2 = aux;
    
    return cabeca2;
}

int main()
{
    celula *cabeca1 = NULL;
    celula *cabeca2 = NULL;

    inserir_fim(&cabeca1, 10);
    inserir_fim(&cabeca1, 20);
    inserir_fim(&cabeca1, 30);
    inserir_fim(&cabeca1, 40);
    inserir_fim(&cabeca1, 50);
    inserir_fim(&cabeca1, 60);
    inserir_fim(&cabeca1, 70);
    inserir_fim(&cabeca1, 80);
    inserir_fim(&cabeca1, 90);
    inserir_fim(&cabeca1, 100);
  
    // inserir_inicio(&cabeca1, 10);
    // inserir_inicio(&cabeca1, 20);
    // inserir_inicio(&cabeca1, 30);
    // inserir_inicio(&cabeca1, 40);
    // inserir_inicio(&cabeca1, 50);
    // inserir_inicio(&cabeca1, 60);
    // inserir_inicio(&cabeca1, 70);
    // inserir_inicio(&cabeca1, 80);
    // inserir_inicio(&cabeca1, 90);
    // inserir_inicio(&cabeca1, 100);


    printf("\nLista 1: \n");
    imprimir(cabeca1);
    
    cabeca2 = dividir(cabeca1);
    
    printf("\nLista 1: \n");
    imprimir(cabeca1);
    
    printf("\nLista 2: \n");
    imprimir(cabeca2);

    // printf("\nTROCAR: \n");
    // trocar(cabeca1, 50);

    // printf("\nLista 1 - trocada: \n");
    // imprimir(cabeca1);


    return 0;
}
