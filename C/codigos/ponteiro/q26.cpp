#include <stdio.h>
#include <math.h>

void baskara(float A, float B, float C, float delta, float *X1, float *X2)
{
    *X1 = (((-1 * B) + sqrt(delta)) / (2 * A));
    *X2 = (((-1 * B) - sqrt(delta)) / (2 * A));
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    if (A == 0)
    {
        return -1;
    }
    // delta
    float delta = (powl(B, 2) - 4 * A * C);

    if (delta == 0)
    {
        baskara(A, B, C, delta, X1, X2);
        return 1;
    }
    else if (delta >= 0)
    {
        baskara(A, B, C, delta, X1, X2);
        return 2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float A, B, C;
    float X1 = 0, X2 = 0;

    printf("Digite o valor de A:");
    scanf("%f", &A);
    printf("Digite o valor de B:");
    scanf("%f", &B);
    printf("Digite o valor de C:");
    scanf("%f", &C);

    int result = raizes(A, B, C, &X1, &X2);

    if (result > 0)
    {
        printf("\nEssa equacao possui %d raize(s):\nX1: %.2f\nX2: %.2f", result, X1, X2);
    }
    else
    {
        printf("Essa equação nao possui raizes reais!!!\n");
    }

    return 0;
}
