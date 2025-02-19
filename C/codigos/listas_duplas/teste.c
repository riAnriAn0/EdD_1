#include <stdio.h>

int main(int argc, char const *argv[])
{
    int **ptr_2 = NULL;
    int *ptr = NULL;
    int num = 1;

    ptr = &num;
    ptr_2 = &ptr;

    printf("**ptr_2: %d\n", **ptr_2);
    printf("*ptr_2: %p\n", *ptr_2);
    printf("ptr_2: %p\n", ptr_2);
    printf("*ptr: %d\n", *ptr);
    printf("ptr: %p\n", ptr);

    return 0;
}
