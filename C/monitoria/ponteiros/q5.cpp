#include <stdio.h>

int soma_dobro(int *p, int *q)
{
    int c = 2*(*p) + 2 * (*q);
    *p = 2 * (*p);
    *q = 2 * (*q);
    return c;
}

int main()
{
    int a; 
    int b;

    printf("Digite um valor:");
    scanf("%d", &a); 

    printf("Digite um valor:");
    scanf("%d", &b);

    int d = soma_dobro(&a, &b);

    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("D: %d\n", d);

    return 0;
}

/* 
5. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que
retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na
própria variável A e o dobro de B na própria variável B.
 */
