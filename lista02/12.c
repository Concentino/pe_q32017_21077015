#include<stdio.h>
#include<math.h>
//Exercício calcula o Coeficiente Binomial
//Resolve os fatoriais
double fatorial (int x){

    if (x==1 || x==0) return 1;
    return x * fatorial (x - 1);
}
//Fornece resultado final do binomial
double binomial (int a, int b){

    return (fatorial(a)) / (fatorial(b) * fatorial(a-b));

}


int main(){

    int n, k;
    scanf ("%i %i", &n, &k);

    printf ("%.0lf\n", binomial(n, k));

    return 0;
}

