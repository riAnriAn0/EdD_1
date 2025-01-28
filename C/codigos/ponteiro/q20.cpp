#include <stdio.h>

int negativos(float *vet[10], int N)
{
    int temp = 0;

    for (int i = 0; i < N; i++)
    {
        if ( *vet[i] < 0)
        {
            temp++;
        }
    }
    return temp;
};

int main()
{
    int N = 0;

    printf("Quantos numeros seram contados? ");
    scanf("%d", &N);

    float vet[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
    }

    int negat = negativos(&vet[N], N);

    printf("\n%d nuemros negativos\n", negat);

    return 0;
}
