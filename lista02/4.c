#include<stdio.h>
#include<math.h>
//Resolve soma
float soma (float x, float y){

    return x + y;
}
//Resolve subtra��o
float subtracao (float x, float y){

    return x - y;
}
//Resolve multiplica��o
float multiplicacao (float x, float y){

    return x * y;
}
//Resolve divis�o
float divisao (float x, float y){

    if (y == 0) {
        printf ("\nDivis�o por zero...");
        return divisao (0,1);
    }
    return x/y;
}
//Resolve pot�ncia
float potencicao (float x, float y){

    return pow (x,y);
}
//In�cio fun��o principal
int main(){

    int OPCAO;
    float x, y;
    scanf ("%i %f %f", &OPCAO, &x, &y);

    if (OPCAO == 1){
        printf ("%.2f\n", soma(x, y));
    }
    else if (OPCAO == 2){
        printf ("%.2f\n", subtracao(x, y));
    }
    else if (OPCAO == 3){
        printf ("%.2f\n", multiplicacao(x, y));
    }
    else if (OPCAO == 4){
        printf ("%.2f\n", divisao(x, y));
    }
    else if (OPCAO == 5){
        printf ("%.2lf\n", potencicao(x, y));
    }
    else {
        printf ("\nOpcao invalida...\n");
    }
return 0;
}//Fim fun��o principal
