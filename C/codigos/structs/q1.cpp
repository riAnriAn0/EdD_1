#include <stdio.h>

typedef struct
{
    int hora;
    int min;
    int seg;
} Horario;

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    Data data;
    Horario hora;
    char[100] compromisso;
} Compromisso ;
