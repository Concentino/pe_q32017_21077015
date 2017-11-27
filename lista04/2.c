#include<stdio.h>
#include<stdlib.h>

struct cronometro {
    int MINUTOS;
    int SEGUNDOS;
    int DECIMOS;
};

void add_tempo (struct cronometro *p1, struct cronometro *p2)
{

    //printf("\nInserir minutos, segundos e decimos\n");
    scanf("%i %i %i %i %i %i", &p1->MINUTOS, &p1->SEGUNDOS, &p1->DECIMOS, &p2->MINUTOS, &p2->SEGUNDOS, &p2->DECIMOS);
}

void tempo_final (struct cronometro *p1, struct cronometro *p2)
{
    struct cronometro tempo_final;
    tempo_final.MINUTOS = p1->MINUTOS - p2->MINUTOS;
    tempo_final.SEGUNDOS = p1->SEGUNDOS - p2->SEGUNDOS;
    if (tempo_final.SEGUNDOS<0) {
        tempo_final.MINUTOS--;
        tempo_final.SEGUNDOS +=60;
    }
    tempo_final.DECIMOS = p1->DECIMOS - p2->DECIMOS;
    if (tempo_final.DECIMOS<0) {
        tempo_final.SEGUNDOS--;
        tempo_final.DECIMOS +=100;
    }
    printf("%im %is %i", tempo_final.MINUTOS, tempo_final.SEGUNDOS, tempo_final.DECIMOS);
}

int main()
{
    struct cronometro tempo1, tempo2, *point1, *point2;

    point1 = &tempo1;
    point2 = &tempo2;

    add_tempo(point1, point2);
    tempo_final(point1, point2);


    printf("\n");
    return 0;
}
