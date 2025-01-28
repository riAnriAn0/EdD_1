#include <stdio.h>

void maiorNumeros(int numeros[10], int *maior, int *rept)
{
    *maior = numeros[0];
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > *maior)
        {
            *maior = numeros[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (*maior == numeros[i])
        {
            *rept += 1;
        }
    }
}

int main()
{
    int numeros[10];
    int maior;
    int rept = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i]);
    }

    maiorNumeros(numeros, &maior, &rept);

    printf("O maior numero : %d\nNumeros de repeticoes: %d\n", maior, rept);

    return 0;
}
