#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char rua[50];
    int casa;
    char cidade[30];
} Endereco ;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[20];
    Endereco *endereco;
    int telefone;
    Data *nacismento;
} Contato;

int main()
{
    int num_contatos = 0;

    printf("Numero de contatos a ser guardados: ");
    scanf("%d",&num_contatos);

    Contato *contatos = (Contato *)malloc(sizeof(Contato) * num_contatos);    

    for (int i = 0; i < num_contatos; i++)
    {
        printf("Nome: ");
        scanf("%s", contatos[i].nome);

        printf("Telefone: ");
        scanf("%d", &contatos[i].telefone);

        contatos[i].endereco = (Endereco *)malloc(sizeof(Endereco));
        contatos[i].nacismento = (Data *)malloc(sizeof(Data));

        printf("Cidade: ");
        scanf("%s", contatos[i].endereco->rua);
        printf("Rua: ");
        scanf("%s", contatos[i].endereco->cidade);
        printf("Casa: ");
        scanf("%d", &contatos[i].endereco->casa);

        printf("Dia de nascimento: ");
        scanf("%d", &contatos[i].nacismento->dia);
        printf("Mes: ");
        scanf("%d", &contatos[i].nacismento->mes);
        printf("Ano: ");
        scanf("%d", &contatos->nacismento->ano);
    }

    for (int i = 0; i < num_contatos; i++)
    {
        printf("Contatos\n");
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %d\n", contatos[i].telefone);
        printf("Cidade: %s\n", contatos[i].endereco->cidade);
        printf("Rua: %s\n", contatos[i].endereco->rua);
        printf("Casa: %d\n", contatos[i].endereco->casa);
        printf("Dia de nascimento: \n", contatos[i].nacismento->dia);
        printf("Mes: \n", contatos[i].nacismento->mes);
        printf("Ano: \n", contatos[i].nacismento->ano);
    }
    

    return 0; 
}
