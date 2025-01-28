#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 2;

    printf("\nx: %d\ny: %d\n", x, y);
    troca(&x, &y);
    printf("\nx: %d\ny: %d\n", x, y);

    return 0;
}
