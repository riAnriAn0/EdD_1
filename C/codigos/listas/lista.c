/*
    ▪Implemente as funções descritas abaixo sobre listas encadeadas simples
   * ▪Retornar a posição de um elemento na lista
   * ▪Localizar um elemento da lista e trocar de posição com o próximo
   * ▪Receber duas listas e concatenar em uma só
    ▪Receber uma lista e dividir em duas na metade
    ▪Reverter uma lista (primeiros ficam por último)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
} celula;

// iniserir no inicio
celula *inserir_elemento(celula *prt_head, int conteudo, int *qnt_registro)
{
    celula *nova_celula = (celula *)malloc(sizeof(celula));
    nova_celula->prox = NULL;
    nova_celula->conteudo = conteudo;

    if (prt_head == NULL)
    {
        (*qnt_registro)++;
        return nova_celula;
    }
    else
    {
        celula *aux = prt_head;
        nova_celula->prox = aux;
        prt_head = nova_celula;
        (*qnt_registro)++;
        return prt_head;
    }
}

// inserir no final
celula *inserir_fim(celula *prt_head, int conteudo, int *qnt_registro)
{
    celula *nova_celula = (celula *)malloc(sizeof(celula));
    nova_celula->prox = NULL;
    nova_celula->conteudo = conteudo;

    if (prt_head == NULL)
    {
        (*qnt_registro)++;
        return nova_celula;
    }
    else
    {
        celula *aux = prt_head;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }

        aux->prox = nova_celula;
        (*qnt_registro)++;

        return prt_head;
    }
}

void imprimir(celula *ptr_head)
{
    celula *aux = ptr_head;
    printf("Head: %p\n", ptr_head);
    while (aux != NULL)
    {
        printf("=========================\n");
        printf("Conteudo: %d\n", aux->conteudo);
        printf("Endereco: %p\n", aux);
        printf("Prox: %p\n", aux->prox);
        aux = aux->prox;
    }
}

celula *busca(celula *prt_head, int conteudo)
{
    celula *aux = prt_head;
    while (aux->prox != NULL)
    {
        if (aux->conteudo == conteudo)
        {
            return aux;
        }
        aux = aux->prox;
    }
    return NULL;
}

celula *remover(celula *ptr_head, int conteudo, int *qnt_registro)
{
    celula *aux = ptr_head;
    // remover o primeiro item
    celula *primeiro = ptr_head;

    if (primeiro->conteudo == conteudo)
    {
        ptr_head = primeiro->prox;
        free(primeiro);
        (*qnt_registro)--;

        return ptr_head;
    }

    // remover em outras posições
    while (aux->conteudo != conteudo)
    {
        primeiro = aux;
        aux = aux->prox;
    }

    primeiro->prox = aux->prox;
    free(aux);
    (*qnt_registro)--;

    return ptr_head;
}

int posicao(celula *prt_head, int conteudo, int qnt_registro)
{
    int indice = 0;
    celula *aux = prt_head;
    while (indice < qnt_registro)
    {
        indice++;
        if (aux->conteudo == conteudo)
        {
            return indice;
        }
        aux = aux->prox;
    }
    return 0; // retorna para nao encrontado
}

celula *troca(celula *ptr_head, int indice, int qnt_redistro)
{

    if (indice == 1)
    {
        celula *primeiro = ptr_head;
        celula *segundo = primeiro->prox;
        celula *terceiro = segundo->prox;

        segundo->prox = primeiro;
        primeiro->prox = terceiro;

        return segundo;
    }
    else if (indice == qnt_redistro)
    {
        printf("Nao e possivel trocar com proximo!!!\n");
        return ptr_head;
    }
    else
    {
        celula *aux = ptr_head;
        for (int i = 0; i < indice - 1; i++)
        {
            aux = aux->prox;
        }

        celula *primeiro = aux;
        celula *segundo = primeiro->prox;
        celula *terceiro = segundo->prox;

        primeiro->prox = terceiro;
        segundo->prox = terceiro->prox;
        terceiro->prox = segundo;

        return ptr_head;
    }
}

celula *concatenar(celula *head_lista_1, celula *head_lista_2)
{
    celula *aux = head_lista_1;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = head_lista_2;

    return head_lista_1;
}

int main()
{
    celula *head = NULL;
    int qnt_registros1 = 0;

    celula *head2 = NULL;
    int qnt_registros2 = 0;

    int quantidade;

    printf("Digite a quantidade de elementos da primeira lista: ");
    scanf("%d", &quantidade);

    printf("Primeira Lista\n");
    for (int i = 0; i < quantidade; i++)
    {
        int conteudo;
        printf("Digite um numero: ");
        scanf("%d", &conteudo);
        // head = inserir_elemento(head, conteudo, &qnt_registros1);
        head = inserir_fim(head, conteudo, &qnt_registros1);
    }

    printf("Digite a quantidade de elementos da segunda lista: ");
    scanf("%d", &quantidade);

    printf("Segunda Lista\n");
    for (int i = 0; i < quantidade; i++)
    {
        int conteudo;
        printf("Digite um numero: ");
        scanf("%d", &conteudo);
        // head = inserir_elemento(head, conteudo, &qnt_registros1);
        head2 = inserir_fim(head2, conteudo, &qnt_registros2);
    }

    printf("\nQnt redistro lista 1: %d\n", qnt_registros1);
    imprimir(head);
    printf("\nQnt redistro lista 2: %d\n", qnt_registros2);
    imprimir(head2);

    for (int i = 0; i < 1; i++)
    {
        int busca;

        printf("Busca:");
        scanf("%d", &busca);

        int indice = posicao(head, busca, qnt_registros1);

        if (indice != 0)
        {
            printf("Indice: %d\n", indice);
        }
        else
        {
            printf("Nao encontrado!!!\n");
        }

        // int conteudo;

        // printf("Digite o conteudo para remover: ");
        // scanf("%d", &conteudo);
        // head = remover(head, conteudo, &qnt_registros1);
        // imprimir(head);

        // printf("Digite o indice para fazer a troca: ");
        // scanf("%d", &indice);
        // head = troca(head, indice, qnt_registros1);
        // imprimir(head);
    }

    celula *lista_concatenada = concatenar(head, head2);
    printf("\nLista concatenada\n");
    imprimir(lista_concatenada);

    // função dividir('lista que sera dividida','lista que receberá a outro metade')
    celula *nova_lista = NULL;

    dividir(lista_concatenada, nova_lista);
    printf("\nLista concatensada\n");
    imprimir(lista_concatenada);
    printf("\nLista dividida\n");
    imprimir(nova_lista);

    return 0;
}
