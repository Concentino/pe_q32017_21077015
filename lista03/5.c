#include<stdio.h>
#include<stdlib.h>


int cmpfunc (const void * a, const void *b) {
    return (*(int*)a - *(int*)b );

}
//Preenche vetor
void completa (int *v, int TAM)
{
    int i;
    for (i=0; i<TAM; i++) {
        scanf("%i", v+i);
    }
}

//Verifica se há repetição de números dentro do vetor
void verifica (int *v, int TAM)
{
    int aux [TAM], i, j, NUM;

    for (i=0; i<TAM; i++) {
            NUM = 0;
        for (j=i; j<TAM; j++) {
            if (v[i]==v[j]) NUM++;
        }
        if (NUM>1) {j=TAM; printf("%i-%i ", v[i], NUM);}
        while (v[i]==v[i+1]) i++;
    }

}

int main()
{
    int TAM;
    //printf("\nDigite o tamanho do vetor\n");
    scanf("%i", &TAM);

    int vetor [TAM];

	/*int *vetor;

    vetor = malloc(sizeof(int)*TAM);*/


    completa (vetor, TAM);
    qsort(vetor, TAM, sizeof(int), cmpfunc);
    verifica (vetor, TAM);
	printf ("\n");

    return 0;
}
