#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
  int resto = 0;
    while (x!=0) {
        resto = resto + x%2;
        x = x/2;
	}
	return 0;
}

ulint f2(ulint x)
{
  int i, a=0;

    for (i=0; i<32;i++){
        if (x & 1<<i) a++;
    }
	return 0;
}

int main(void) {
  
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f1(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
  
  tempo_init = clock();
  for (int i=0; i<BIGNUM; i++) {
    soma += f2(i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
  
  return 0;
}
