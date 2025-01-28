#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char rua[50]; /// alocamento estatico da variavel
    int casa;
    char cidade[30];
} Endereco;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[50];
    Endereco endereco;
    int telefone;
    Data data_nascimento;
} Contato;

int main()
{
    int n_contatos;

    printf("Quantos contados serão quardados? ");
    scanf("%d", &n_contatos);

    Contato *prt_cnt = (Contato *)malloc(n_contatos * sizeof(Contato));

    if (prt_cnt)
    {
        for (int i = 0; i < n_contatos; i++)
        {
            printf("Digite seu nome: ");
            scanf("%s", prt_cnt[i].nome);
            printf("Digite seu endereco\n");
            printf("Rua: ");
            scanf("%s", prt_cnt[i].endereco.rua);
            printf("Casa: ");
            scanf("%d", &prt_cnt[i].endereco.casa);
            printf("Cidade: ");
            scanf("%s", prt_cnt[i].endereco.cidade);
            printf("Telefone: ");
            scanf("%d", &prt_cnt[i].telefone);
            printf("Data de nascimento (dd/mm/aaaa):\n");
            scanf("%d/%d/%d", &prt_cnt[i].data_nascimento.dia, &prt_cnt[i].data_nascimento.mes, &prt_cnt[i].data_nascimento.ano);
        }
    }
    else
    {
        printf("Erro ao alocar memoria! \n");
    }

    return 0;
}
