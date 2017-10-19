#include<stdio.h>
#include<math.h>
//Diz se um número é ímpar (retornando 1) ou par (retornando 0)
unsigned int verificar (int NUM){

    if (NUM%2==0) return 0;
    return 1;

}

int main (){

    int NUM;
    scanf ("%i", &NUM);
    printf ("%i\n", verificar(NUM));

return 0;
}
