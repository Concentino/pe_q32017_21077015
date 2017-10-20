#include<stdio.h>
//Fornece a sequência de Fibonacci
int fibMem [1000]={0};

int fib (int n){

    if (n==0) return 0;
    if (n<=2) return 1;

    return fibMem[n] =  fib(n-1) + fib(n-2);
}

int main(){

    int n, i;

    fibMem[1] = 1;
    fibMem[2] = 1;

    scanf ("%i", &n);

	if (fibMem[n]!=0){
		printf ("%i\n", fibMem[n]);
	}
	else {
	printf("%i\n", fib(n));
	}

    return 0;
}
