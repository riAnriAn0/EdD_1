#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    printf("Digite um valor float: ");
    scanf("%f", &b);

    printf("Digite um valor char: ");
    scanf("%s", &c);

    int *p;
    float *q;
    char *r;

    p = &a;
    q = &b;
    r = &c;

    *p = 10;
    *q = 12.5;
    *r = 'c';

    printf("int: %d\n", a);
    printf("float: %f\n", b);
    printf("char: %c\n", c);
     
    return 0;
}

/* 
4. Escreva um programa que declare um inteiro, um float e um char, e ponteiros para inteiro,
float, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
 */
