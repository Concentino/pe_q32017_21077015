#include<stdio.h>
#include<stdlib.h>

struct ficha {
    char nome [100];
    char matricula [10];
    float P1, P2, P3;
}lista [50];

void coleta_arquivo (struct ficha lista[50])
{
    int i = 0;
    FILE *arquivo, *leitor;
    arquivo = fopen("lista_alunos.txt", "r");
    leitor = fopen("lista_alunos.txt", "r");

    if (arquivo==NULL) {
            printf("\nERRO! Nao foi possivel encontrar o arquivo. ");
            return 0;
    }

    else {
        while (fgetc(leitor)!=EOF){
        	fscanf(arquivo, "%s %s %f %f %f", &lista[i].nome, &lista[i].matricula, &lista[i].P1, &lista[i].P2, &lista[i].P3);
        	i++;
        }
    }
    fclose(arquivo);
    arquivo = NULL;
}

void preenche_arquivo (struct ficha lista [50])
{
    int i;
    FILE *arquivo;
    arquivo = fopen("media_alunos.txt", "w");

    if (arquivo==NULL) {
            printf("\nERRO! Nao foi possivel encontrar o arquivo. ");
            return 0;
    }

    else {
        for (i=0; i<50; i++){
            fprintf(arquivo,"%s  %s  %.2f\n", lista[i].nome, lista[i].matricula, (lista[i].P1+lista[i].P2+lista[i].P3)/3);
        }
    }

    fclose(arquivo);
    arquivo = NULL;
}

int main()
{
    coleta_arquivo(lista);
    preenche_arquivo(lista);

    printf("\n");
    return 0;
}
