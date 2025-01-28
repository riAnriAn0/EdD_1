#include <stdio.h>
#include <stdlib.h>

void imprimir(int *vetor, int num_element)
{
    printf("==========================\n");
    printf("         IMPRIMIR        \n");
    printf("==========================\n");
    for (int i = 0; i < num_element; i++)
    {
        printf("%d Elemento: %d\n", i + 1, *(vetor + i));
    }
}

int main()
{
    int num_d_dados = 0;
    printf("Quantos elementos seram lidos:");
    scanf("%d", &num_d_dados);

    int *ptr_dados = (int *)malloc(num_d_dados * sizeof(int));

    for (int i = 0; i < num_d_dados; i++)
    {
        printf("%d Elemento:", i + 1);
        scanf("%d", &ptr_dados[i]);
    }

    imprimir(ptr_dados, num_d_dados);

    return 0;
}

/*
7. Faça um programa que leia um quantidade de elementos n, crie dinamicamente um vetor de n
elementos e passe esse vetor para uma função que irá ler seus elementos. Em seguida, o vetor
preenchido deve ser impresso.
*/