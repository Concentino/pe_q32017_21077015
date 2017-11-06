#include<stdio.h>
//Preenche o vetor.
 void leitura (int *p_v1)
 {
     int i=0;
     while (i<5) {
        scanf("%i", p_v1);
        p_v1++;
        i++;
     }
 }
//Soma V1 e V2, resultando em V3;
 void soma (int *ponteiro_v1, int *ponteiro_v2, int *ponteiro_v3)
 {
     int x = 0, j = 0;
     while (x<5) {
        *ponteiro_v3 = *ponteiro_v1+*ponteiro_v2;
        ponteiro_v1++;
        ponteiro_v2++;
        ponteiro_v3++;
        x++;
     }
 }

 void imprime(int *v, int TAM)
{
    int i;
    for (i=0; i<TAM; i++) {
        printf("%i ", *(v+i));
    }
}

int main()
{
    int v1 [5], v2 [5], v3 [5];

    //printf("Preencha as 5 posicoes dos vetores V1 e V2, respectiviamente\n");
    leitura(v1);
    leitura(v2);

    soma (v1, v2, v3);

    imprime(v3, 5);

	printf ("\n");
    return 0;
}
