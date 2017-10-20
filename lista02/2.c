#include<stdio.h>
#include<math.h>
//Resolve multiplicação
 float multiplicador (float(a), float(b), float(c)){

    return a*b*c ;

}

int main (){

    float a, b, c ;
    scanf ("%f %f %f", &a, &b, &c);
    printf ("%.2f\n",multiplicador(a, b, c));

return 0;
}
