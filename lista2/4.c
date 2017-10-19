#include<stdio.h>
#include<math.h>
//Resolve soma
float soma (float x, float y){

    return x + y;
}
//Resolve subtração
float subtracao (float x, float y){

    return x - y;
}
//Resolve multiplicação
float multiplicacao (float x, float y){

    return x * y;
}
//Resolve divisão
float divisao (float x, float y){

    if (y == 0) {
        printf ("\nDivisão por zero...");
        return divisao (0,1);
    }
    return x/y;
}
//Resolve potência
float potencicao (float x, float y){

    return pow (x,y);
}
//Início função principal
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
}//Fim função principal
