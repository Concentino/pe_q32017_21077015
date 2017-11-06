#include<stdio.h>
#include<stdlib.h>

//Verifica quantas vogais existem na palavra digitada.
void funcao( char *entrada)
{
    int vogal = 0;
    while (*entrada ) {
        if (*entrada=='a'|| *entrada=='e' || *entrada=='i' || *entrada=='o' || *entrada=='u') vogal++;
        entrada++;
    }
    printf("%i\n", vogal);
}

int main ()
{
    char entrada [255];
    //printf("Digite uma palavra\n");
    fgets(entrada, 255, stdin);

    funcao(entrada);
    return 0;

}
