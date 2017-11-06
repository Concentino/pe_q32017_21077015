#include<stdio.h>
#include<stdlib.h>

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
    int aux [10], i, j;

    for (i=0; i<10; i++) {
        aux [i] =0;
    }

    for (i=0; i<TAM; i++) {
        if (v[i]==0) aux [0]++;
        if (v[i]==1) aux [1]++;
        if (v[i]==2) aux [2]++;
        if (v[i]==3) aux [3]++;
        if (v[i]==4) aux [4]++;
        if (v[i]==5) aux [5]++;
        if (v[i]==6) aux [6]++;
        if (v[i]==7) aux [7]++;
        if (v[i]==8) aux [8]++;
        if (v[i]==9) aux [9]++;
    }
    for (i=0; i<10; i++) {
        if (aux [i]!=0) printf("%i-%i\n", i, aux [i]);
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
    

    verifica (vetor, TAM);
	
	printf ("\n");

    return 0;
}
