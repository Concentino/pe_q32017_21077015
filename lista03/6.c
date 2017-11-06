#include<stdio.h>
#include<stdlib.h>

//Preenche vetor
void preenche (int *v, int n)
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%i", v+i);
    }
}

int cmpfunc (const void * a, const void *b) {
    return (*(int*)a - *(int*)b );

}
//Calcula mediana dos numeros do vetor
void mediana (int *v, int n)
{
    int pos = n/2;

    if (n%2==0) printf("%.2f\n", (float)(v[pos-1]+ v[pos])/2);
    if (n%2!=0) printf("%.2f\n", (float)v[pos]/2);
}


int main()
{
    int n;
    //printf("\nInsira o tamanho do vetor e logo em seguida os numeros que o compoem\n");
    scanf("%i", &n);

    int *vetor;
    vetor = malloc(sizeof(int)*n);

    preenche (vetor, n);

    qsort(vetor, n, sizeof(int), cmpfunc);

    mediana(vetor, n);

	printf ("\n");

    return 0;
}
