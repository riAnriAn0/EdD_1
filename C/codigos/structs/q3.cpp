#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 5

typedef struct
{
    char nome[50];
    int matricula;
    char curso[10];
} Aluno;

int main(int argc, char const *argv[])
{
    Aluno alunos[TAM_VETOR];

    for (int i = 0; i < 5; i++)
    {
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Curso: ");
        scanf("%s", alunos[i].curso);
        system("cls");
    }

    printf("============MATRICULAS===================\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }

    return 0;
}
