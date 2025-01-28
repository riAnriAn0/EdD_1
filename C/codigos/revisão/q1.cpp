#include <stdio.h>

int main()
{
    char nome[11];
    char sexo;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu sexo (F/M): ");
    scanf(" %c", &sexo);

    if ((sexo == 'F') || (sexo == 'f'))
    {
        printf("\nBem-vinda %s.\n", nome);
    }
    else
    {
        printf("\nBem-vindo %s.\n", nome);
    }

    return 0;
}
