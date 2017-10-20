#include<stdio.h>
#include<math.h>
//Transforma celsius em fahrenheit
float celcius_fahrenheit (float c){

    return c * 1.8+32;

}
//Transforma celsius em kelvin
float celcius_kelvin (float c){

    return (c + 273);

}
//Transforma fahrenheit em celsius
float fahrenheit_celcius (float f){

    return (f-32)/1.8;

}
//Transforma fahrenheit em kelvin
float fahrenheit_kelvin (float f){

    return ((f-32)/9)*5+273;

}
//Transforma kelvin em celsius
float kelvin_celcius (float k){

    return (k-273);

}
//Transforma kelvin em fahrenheit
float kelvin_fahrenheit (float k){

    return ((k-273)/5) * 9 + 32;

}
//Transforma Decimal em Binário
unsigned int decimal_para_binario(int Num){
    int Resto, Quociente, Aux [10], Contador = 0, AUX=0;
    Resto = Num%2;
    Quociente = Num/2;
    Aux [Contador] = Resto;

    while (Quociente!=0){
        Contador = Contador + 1;
        Resto = Quociente%2;
        Quociente = Quociente/2;
        Aux [Contador] = Resto;
    }
    while (Contador>=0){
        AUX = 10*AUX + Aux[Contador];
        Contador = Contador - 1;
    }
    return AUX;
}
//Transforma Binário para Decimal
unsigned int binario_para_decimal (int bin){
    int TOTAL = 0;
    int POTENCIA = 1;

    while (bin > 0){
        TOTAL = TOTAL + bin%10 * POTENCIA;
        bin = bin/10;
        POTENCIA = POTENCIA * 2;
    }
    return TOTAL;
}
//Início função principal
int main (){

    int OPCAO, OPCAO1, OPCAO2;
    float GRANDEZA;
    scanf ("%i %i %i %f", &OPCAO, &OPCAO1, &OPCAO2, &GRANDEZA);

    if (OPCAO==1){
            if (OPCAO1 == 1 && OPCAO2 == 2){
                printf ("%.2f\n", celcius_fahrenheit(GRANDEZA));
            }
            else if (OPCAO1 == 1 && OPCAO2 == 3){
                printf ("%.2f\n", celcius_kelvin(GRANDEZA));
            }
            else if (OPCAO1 == 2 && OPCAO2 == 1){
                printf ("%.2f\n", fahrenheit_celcius(GRANDEZA));
            }
            else if (OPCAO1 == 2 && OPCAO2 == 3){
                printf ("%.2f\n", fahrenheit_kelvin(GRANDEZA));
            }
            else if (OPCAO1 == 3 && OPCAO2 == 1){
                printf ("%.2f\n", kelvin_celcius(GRANDEZA));
            }
            else if (OPCAO1 == 3 && OPCAO2 == 2){
                printf ("%.2f\n", kelvin_fahrenheit(GRANDEZA));
            }
            else {printf ("\nOpcao invalida...\n");}
    }
    else if (OPCAO==2){
            if (OPCAO1 == 1 && OPCAO2 == 2){
                printf ("%i\n", decimal_para_binario(GRANDEZA));
            }
            else if (OPCAO1 == 2 && OPCAO2 == 1){
                printf ("%i\n", binario_para_decimal(GRANDEZA));
            }
    else {
        printf ("\nOpcao invalida\n");
    }
    }

return 0;
}//Fim função principal
