#include<stdio.h>
#include<math.h>
//Encontra o MDC de dois números
int mdc (int a, int b){

    if (a==0) return b;
    if (b==0) return a;
    return mdc(b, a%b);
}

int main(){

    int a,b;
    scanf ("%i %i", &a, &b);

    printf ("%i\n", mdc(a,b));
}
