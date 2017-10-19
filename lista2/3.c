#include<stdio.h>
#include<math.h>

float funcao_pi(){
    float a1 = 0, PI = 0;
    float a=1, b=0.707107, t=0.25, p=1;
    int i = 0;

    for (i=0; i<=25; i++){
        a1 = (a+b)/2;
        b = sqrt(a*b);
        t = t-p*pow(a-a1, 2);
        p = 2*p;
        a = a1;

        PI = pow(a+b, 2)/(4*t);

    }
    //printf("\n%f", PI);
    return PI;

}

int main(){

    printf("%f", funcao_pi());

}
