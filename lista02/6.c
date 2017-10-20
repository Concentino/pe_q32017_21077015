#include<stdio.h>
#include<math.h>
//Resolve eq por Bhaskara, quando sinal frente a raiz é positivo
double bhaskara_pos ( double a, double b, double c, double delta){
	
	if (delta>0) return printf ("%.2lf",-b/(2*a) + sqrt(delta)/(2*a));
	if (delta<0) return printf ("%.2lf + %.2lfi   ",-b/(2*a), sqrt(-delta)/(2*a));
	return printf ("%lf", -b/(2*a));

}
//Resolve eq por Bhaskara, quando sinal frente a raiz é negativo
double bhaskara_neg ( double a, double b, double c, double delta){

    if (delta>0) return printf ("%.2lf\n", (-b - delta)/(2 * a));
	if (delta<0) return printf ("%.2lf - %.2lfi\n",-b/(2*a), sqrt(-delta)/(2*a));
	return printf ("%lf\n", -b/(2*a));

}

int main () {

    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
	delta = pow(b,2) -4 * a * c;

	bhaskara_pos (a, b, c, delta);
	bhaskara_neg (a, b, c, delta);
	
    //printf("%.2lf\n", bhaskara_neg(a,b,c));
    //printf("%.2lf\n", bhaskara_pos(a,b,c));

return 0;
}
