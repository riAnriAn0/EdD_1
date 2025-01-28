#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_alunos = 0;
    printf("Quantidade de alunos que seram Cadastrados: ");
    scanf("%d", &num_alunos);

    float *ptr = (float *)malloc(num_alunos * sizeof(float));

    for (int i = 0; i < num_alunos; i++)
    {
        printf("Nota aluno %d:", i + 1);
        scanf("%f", &ptr[i]);
    }

    float media = 0;
    float soma = 0;

    for (int i = 0; i < num_alunos; i++)
    {
        soma += *(ptr + i);
    }

    media = soma / num_alunos;

    printf("==========================\n");
    printf("Media da turma: %.2f\n", media);

    free(ptr); // limpa a memoria ultiliza pelo ponteiro
    return 0;
}

/* 8. Escreva um programa em linguagem C que solicita do usuário a quantidade de alunos de uma
turma e aloca um vetor de notas (números reais). Depois de ler as notas, o programa deve
imprimir a média aritmética da turma. Obs: não deve ocorrer desperdício de memória; e após
ser utilizada a memória deve ser devolvida. */