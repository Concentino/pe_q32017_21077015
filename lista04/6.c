#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x, ulint y)
{
  	int MAIOR, MENOR;
    if (x>y) {
		MAIOR = x;
		MENOR = y;
	}
	else if (x<y) {
		MAIOR = y;
		MENOR = x;
	}
	return 0;
}

ulint f2(ulint x, ulint y)
{
  int MAIOR, MENOR;
    MAIOR = x^((x^y)&-(x<y));
    MENOR = y^((x^y)&-(x<y));
    return 0;
}

int main(void) {
  
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f1(i, 5);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f2(i, 5);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  
  return 0;
}
