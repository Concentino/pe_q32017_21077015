#include <stdio.h>

int movimentacao (int contador, char origem, char destino, char temporario){
   if (contador==1) return printf("%c-%c ", origem, destino);

	  movimentacao(contador-1,origem,temporario,destino);
	  printf ("%c-%c ", origem, destino);
	  return movimentacao(contador-1,temporario,destino,origem);
};

int main(){
   int discos;

   scanf("%d",&discos);
   movimentacao(discos,'A','C','B');
   printf ("\n");
   return 0;
}
