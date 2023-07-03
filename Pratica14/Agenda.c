#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
    int horas;
    int minutos;
    int segundos;

    char descricao[100];
} Evento;

void print_evento(Evento evento)
{
    printf("%02d/%02d/%04d - %02d:%02d:%02d\n%s\n", evento.dia, evento.mes, evento.ano, evento.horas, evento.minutos, evento.segundos, evento.descricao);
}

int main()
{
    int quantidade;
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        Evento evento;

        scanf("%d %d %d %d %d %d %[^\n]s", &(evento.dia), &(evento.mes), &(evento.ano), &(evento.horas), &(evento.minutos), &(evento.segundos), evento.descricao);
        print_evento(evento);
    }
}