#include<stdio.h>
#include<math.h>
//Resolve fatorial
double fatorial (int x){

    if (x==1 || x==0) return 1;
    return x * fatorial(x-1);
}
//Resolve binomial, dado resultado fonecido pela função fatorial
double binomial (int a, int b){

    return (fatorial(a)) / (fatorial(b) * fatorial(a-b));

}

int main(){
    int n, k;

    inicio:
    scanf ("%i %i", &n, &k);

    if (n < k){
        goto inicio;
    }

    printf ("%.0lf\n", binomial(n, k));

return 0;
}
