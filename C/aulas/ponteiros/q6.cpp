#include <stdio.h>

int main()
{
    int vetor[4] = {0,1,2,3};
    int *ptr = NULL;
    ptr = vetor;

printf("Numeros:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        ptr[i] += 1;
    }

printf("Numeros Alterados:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", vetor[i]);
    }
    

    return 0;
}

/* 
Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o
ponteiro ao array. Agora, some mais um (+1) a cada posição do array usando o ponteiro (use *).
 */
