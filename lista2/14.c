#include<stdio.h>
#include<math.h>
//Diz se o n�mero � pal�dromo ou n�o
int inverte (int n, int resto){

    if (n/10 == 0) return resto * 10 + n%10;
    return inverte (n/10, resto * 10 + n%10);
}

int main(){

    int NUM;
    scanf ("%i", &NUM);
    //printf("%i", inverte(NUM, 0));

    if (NUM == inverte(NUM,0)){
        printf ("sim\n");
    }
    else {
        printf ("nao\n");
    }
}
