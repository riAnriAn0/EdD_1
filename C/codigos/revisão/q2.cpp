#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Digite um numero (1 / 9): ");
    scanf("%d", &numero);

    for (int i = 1; i < 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
