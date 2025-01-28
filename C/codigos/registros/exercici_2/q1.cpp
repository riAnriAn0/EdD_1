/* 1. Escreva um código para fazer a validação dos tipos de dados abaixo:

a. Horário: composto por hora, minutos e segundos. (Entre 00:00:00 e 23:59:59)
b. Data: composto por dia, mês e ano. (Entre 01/01/0000 e 31/12/9999) */

#include <stdio.h>

typedef struct
{
    int dia = 0;
    int mes = 0;
    int ano = 0;
} Data;

typedef struct
{
    int hora = 0;
    int min = 0;
    int seg = 0;
} Hora;

bool validacao_data(Data data)
{
    if (data.ano > 9999 || data.ano < 0000)
        return false;

    if (data.mes > 12 || data.mes < 1)
        return false;

    if (data.dia < 1)
        return false;

    if ((data.ano % 4 == 0 && data.ano % 100 != 0) || (data.ano % 400 == 0))
    {
        if (data.mes == 2 && data.dia > 29)
            return false;
    }
    else
    {
        if (data.mes == 2 && data.dia > 28)
            return false;
    }

    int mes_31[7] = {1, 3, 5, 7, 8, 10, 12};
    int mes_30[4] = {4, 6, 9, 11};

    for (int i = 0; i < 7; i++)
    {
        if (data.mes == mes_31[i] && data.dia > 31)
            return false;
    }

    for (int i = 0; i < 4; i++)
    {
        if (data.mes == mes_30[i] && data.dia > 30)
            return false;
    }

    return true;
}

bool validacao_hora(Hora hora)
{
    if (hora.min > 59 || hora.min < 00)
        return false;

    if (hora.seg > 59 || hora.seg < 00)
        return false;

    if (hora.hora > 23 || hora.hora < 00)
        return false;

    return true;
}

int main()
{
    Hora hora;
    Data data;

    printf("Hora (00:00:00): ");
    scanf("%d:%d:%d", &hora.hora, &hora.min, &hora.seg);

    printf("Data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    if (validacao_hora(hora))
    {
        printf("\nHora valida");
    }
    else
    {
        printf("\nHora invalida");
    }

    if (validacao_data(data))
    {
        printf("\nData valida");
    }
    else
    {
        printf("\nData invalida");
    }

    return 0;
}
