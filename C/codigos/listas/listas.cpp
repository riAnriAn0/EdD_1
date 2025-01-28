/*
    ▪Implemente as funções descritas abaixo sobre listas encadeadas simples
   * ▪Retornar a posição de um elemento na lista
   * ▪Localizar um elemento da lista e trocar de posição com o próximo
   * ▪Receber duas listas e concatenar em uma só
   * ▪Receber uma lista e dividir em duas na metade
    ▪Reverter uma lista (primeiros ficam por último)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
    int conteudo;
    struct cel *prox;
} celula;

void imprimir(celula *head)
{
    printf("======================\n");
    printf("Head: %p\n\n", head);

    celula *aux = head;
    while (aux != NULL)
    {
        printf("Conteudo: %d\n", aux->conteudo);
        printf("Endereco: %p\n", aux);
        printf("Prox: %p\n", aux->prox);
        printf("======================\n");

        aux = aux->prox;
    }
}

void inserir_fim(celula **head, int conteudo)
{
    celula *nova_celula = (celula *)malloc(sizeof(celula));
    nova_celula->conteudo = conteudo;
    nova_celula->prox = NULL;

    if (*head == NULL)
    {
        *head = nova_celula;
        return;
    }

    celula *aux = *head;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }
    aux->prox = nova_celula;
    return;
}

void inserir_inicio(celula **head, int conteudo)
{
    celula *nova_celula = (celula *)malloc(sizeof(celula));
    nova_celula->conteudo = conteudo;
    nova_celula->prox = NULL;

    if (*head == NULL)
    {
        *head = nova_celula;
        return;
    }

    nova_celula->prox = *head;
    *head = nova_celula;
}

int posicao(celula *head, int conteudo)
{
    celula *aux = head;
    int cont = 0;
    while (aux != NULL)
    {
        cont++;
        if (conteudo == aux->conteudo)
        {
            return cont;
        }
        aux = aux->prox;
    }
    return 0;
}

void troca(celula **head, int conteudo)
{
    celula *aux = *head;

    // head -> aux -> primeiro (trocar aux / primeiro)
    if (conteudo == aux->conteudo && aux->prox != NULL)
    {
        celula *primeiro = aux->prox;
        aux->prox = primeiro->prox;
        primeiro->prox = aux;
        *head = primeiro;

        imprimir(*head);
        return;
    }

    // aux -> primeiro -> segundo (trocar primeiro / segundo)
    while (aux != NULL)
    {
        if (aux->prox->conteudo == conteudo && aux->prox != NULL)
        {
            celula *primeiro = aux->prox;
            celula *segundo = primeiro->prox;

            if (segundo == NULL)
            {
                printf("\nNao e possivel fazer a troca!!!\n");
                return;
            }

            primeiro->prox = segundo->prox;
            segundo->prox = primeiro;
            aux->prox = segundo;

            imprimir(*head);
            return;
        }

        aux = aux->prox;
    }

    printf("\nNao e possivel fazer a troca!!!\n");
}

celula *concatenar(celula *lista_1, celula *lista_2)
{
    celula *aux = lista_1;
    while (aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = lista_2;
    return lista_1;
}

void reverter(celula **head)
{

    celula *proximo = NULL;
    celula *atual = *head;
    celula *anterior = NULL;

    // anterior = null -> atual -> proximo
    while (atual != NULL)
    {
        // salva o prox endereço
        proximo = atual->prox;

        // inverte o endereço do ponteiro
        atual->prox = anterior;

        // avança para o prox endereço
        anterior = atual;
        atual = proximo;
    }
}

void remover(celula **head, int conteudo)
{
    if (*head == NULL)
    {
        return;
    }

    celula *aux = *head;
    celula *temp = NULL;

    if (aux->conteudo == conteudo)
    {
        *head = aux->prox;
        return;
    }

    while (aux != NULL)
    {
        // remover o primeiro
        if (aux->conteudo == conteudo)
        {
            temp->prox = aux->prox;
            return;
        }

        temp = aux;
        aux = aux->prox;
    }
    aux->prox = NULL;
    free(aux);
}

void menu()
{
    printf("========================\n");
    printf(" [1] INSERIR\n");
    printf(" [2] BUSCAR\n");
    printf(" [3] IMPRIMIR\n");
    printf(" [4] REMOVER\n");
    printf(" [0] SAIR\n");
    printf("========================\n");
}

int main()
{
    celula *lista_1 = NULL;
    celula *lista_2 = NULL;

    int conteudo = 0;
    int opcao = 0;
    int qnt_items = 0;
    int lista = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Conteudo: ");
    //     scanf("%d", &conteudo);
    //     inserir_fim(&lista_1, conteudo);
    // }

    // printf("\nLista 1\n");
    // imprimir(lista_1);

    // // for (int i = 0; i < 4; i++)
    // // {
    // //     printf("Conteudo: ");
    // //     scanf("%d", &conteudo);
    // //     inserir_fim(&lista_2, conteudo);
    // // }
    // // printf("\nLista 2\n");
    // // imprimir(lista_2);

    // // printf("Buscar: ");
    // // scanf("%d", &conteudo);
    // // int resul = posicao(lista_1, conteudo);
    // // if (!(resul))
    // // {
    // //     printf("\nNao encontrado!!!\n");
    // // }
    // // else
    // // {
    // //     printf("\nResult:posicao %d\n", resul);
    // // }

    // // while (1 == 1)
    // // {
    // //     printf("TRocar: ");
    // //     scanf("%d", &conteudo);
    // //     troca(&lista_1, conteudo);
    // // }

    // // celula *lista_3 = concatenar(lista_1, lista_2);
    // // printf("\nLista 3\n");
    // // imprimir(lista_3);

    // printf("Remover: ");
    // scanf("%d", &conteudo);
    // remover(&lista_1, conteudo);

    // imprimir(lista_1);

    bool run = true;

    while (run)
    {
        menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nQuantos items tera a lisa? ");
            scanf("%d", &qnt_items);
            printf("\n==== LISTA-01 ====\n");
            for (int i = 0; i < qnt_items; i++)
            {
                printf("Conteudo: ");
                scanf("%d", &conteudo);
                inserir_fim(&lista_1, conteudo);
            }
            break;
        case 2:
            printf("LISTA 1 ou LISTA 2?");
            scanf("%d", &lista);

            if ((lista == 1 && lista_1 == NULL) || (lista == 2 && lista_2 == NULL))
            {
                printf("\nLista vazia!!!\n");
            }
            else if (lista == 1)
            {
                printf("Conteudo buscado: ");
                scanf("%d", &conteudo);
                int resul = posicao(lista_1, conteudo);
                if (!(resul))
                {
                    printf("\nNao encontrado!!!\n");
                }
                else
                {
                    printf("\nResult:posicao %d\n", resul);
                }
            }
            else if (lista == 2)
            {
                printf("Conteudo buscado: ");
                scanf("%d", &conteudo);
                int resul = posicao(lista_2, conteudo);
                if (!(resul))
                {
                    printf("\nNao encontrado!!!\n");
                }
                else
                {
                    printf("\nResult:posicao %d\n", resul);
                }
            }
            else
            {
                printf("\nOpcao invalida\n");
            }

            break;
        case 3:
            if (lista_1 != NULL && lista_2 != NULL)
            {
                printf("Qual lista? ");
                scanf("%d", &lista);
                if (lista == 1)
                {
                    imprimir(lista_1);
                }
                else if (lista == 2)
                {
                    imprimir(lista_2);
                }
            }
            else
            {
                imprimir(lista_1);
            }

            break;
        case 4:
            if (lista_2 != NULL)
            {
                printf("Qual lista? ");
                scanf("%d", &lista);
                if (lista == 1)
                {
                    printf("Conteudo a ser removido: ");
                    scanf("%d", &conteudo);
                    remover(&lista_1, conteudo);
                }
                else if (lista == 2)
                {
                    printf("Conteudo a ser removido: ");
                    scanf("%d", &conteudo);
                    remover(&lista_2, conteudo);
                }
            }
            else
            {
                printf("Conteudo a ser removido: ");
                scanf("%d", &conteudo);
                remover(&lista_1, conteudo);
            }

            break;
        case 0:
            run = false;
            break;
        default:
            break;
        }
    }

    return 0;
}
