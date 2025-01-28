#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **M = NULL;
    int m, n;

    printf("Numeros de linhas:");
    scanf("%d", &m);

    printf("Numeros de colunas:");
    scanf("%d", &n);

    M = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < n; i++)
    {
        M[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = j;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("\n");
        for (int j = 0; j < n; j++)
        {
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        free(M[i]);
    }

    free(M);

    return 0;
}
