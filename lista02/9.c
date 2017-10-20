#include<stdio.h>
#include<math.h>

//Calcula potências
int pot (int x, int y){

    if (y==0){ return 1;}
    else if (y==1){return x;}
    else {return pot(x, y-1) * x;}

}

int main(){
    int BASE, EXPOENTE;
    scanf ("%i %i", &BASE, &EXPOENTE);

    printf ("%i\n", pot(BASE, EXPOENTE));
    //printf("%i", potencicao(BASE, EXPOENTE));
    return 0;
}
