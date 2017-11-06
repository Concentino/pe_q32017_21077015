#include<stdio.h>
//Preenche string com uma palavra
 int tamanho (char *entrada)
 {
     int leng = 0, i = 0;
     while (*entrada!='\0') {
        entrada++;
        leng++;
     }
    return leng-2;
 }

 //Imprime palavra invertida
 void imprime(char *v, int TAM)
{
    int i;
    for (i=TAM; i>=0; i--) {
        printf("%c", *(v+i));
    }
}

int main ()
{
    int i;
    char entrada [255];


    //printf("Digite uma palavra...\n");
    fgets(entrada, 255, stdin);

    imprime(entrada, tamanho(entrada));

	printf ("\n");

    return 0;
}
