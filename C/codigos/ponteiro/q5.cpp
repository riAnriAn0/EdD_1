#include <stdio.h>

void troca(int *a, int *b)
{
    if(*a < *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(int argc, char const *argv[])
{
    int primeiro, segundo;

    printf("Digite um valor: ");
    scanf("%d", &primeiro);
    printf("Digite um valor: ");
    scanf("%d", &segundo);

    troca( &primeiro, &segundo);

    printf("Primeiro: %d\nSegundo: %d", primeiro, segundo);

    return 0;
}
