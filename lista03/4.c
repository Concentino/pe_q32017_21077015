#include<stdio.h>
//Preenche matriz 3x3.
int preenche (int matriz [3][3])
{
    int i, j;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
                scanf("%i", &matriz[i][j]);

        }
    }
    return matriz[3][3];
}
//Imprime matriz 3x3.
void imprime (int matriz[3][3])
{
    int i, j;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
                printf("%i ", matriz[i][j]);

        }
        printf("\n");
    }
}
//Obtem a transposta da matriz 3x3.
void transposta (int matriz[3][3], int matriz_t [3][3])
{
    int i, j;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
                matriz_t [j][i] = matriz[i][j];
        }
    }
}

int main()
{
    int matriz [3][3], matriz_t [3][3];

    //printf("Complete a matriz 3x3, digitanto linha por linha.\n");
    preenche(matriz);
    
    transposta (matriz, matriz_t);
    imprime (matriz_t);

	printf ("\n");

    return 0;
}
