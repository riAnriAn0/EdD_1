#include <stdio.h>
#include <stdlib.h>
#include <iostream>
// #include <cstdlib>

int main()
{
    int numero[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(numero + i));
    }

    return 0;
}
