#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct space {
    float x1, x2;
    float y1, y2;
    float z1, z2;

};

void add_espaco (struct space *p)
{
    //printf("\nInserir pontos ");
    scanf("%f %f %f %f %f %f", &p->x1, &p->y1, &p->z1, &p->x2, &p->y2, &p->z2);

}

void calc_espaco (struct space *p)
{
    float dist;
    dist = sqrt(pow(p->x2-p->x1, 2)+pow(p->y2-p->y1, 2)+pow(p->z2-p->z1, 2));

    //printf("\nSua distancia eh ");
    printf("%.2f\n", dist);
}


int main()
{
    struct space espaco, *point;
    point = &espaco;

    add_espaco(point);
    calc_espaco(point);


    return 0;
}
