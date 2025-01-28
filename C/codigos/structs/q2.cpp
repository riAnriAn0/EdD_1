#include <stdio.h>

typedef struct
{
    char rua[50];
    int casa;
    char cidade[20];
} Endereco;

typedef struct
{
    char nome[10] ;
    int idade;
    Endereco endereco;
} Pessoa;

int main()
{
    Pessoa pessoa_1;

    printf("nome:");
    scanf("%s", pessoa_1.nome);
    printf("idade: ");
    scanf("%d", &pessoa_1.idade);
    printf("rua:");
    scanf("%s", pessoa_1.endereco.rua);
    printf("casa:");
    scanf("%d", &pessoa_1.endereco.casa);
    printf("cidade:");
    scanf("%s", pessoa_1.endereco.cidade);
    return 0;
}



