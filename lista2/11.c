#include<stdio.h>
#include<math.h>

//Transforma um Binário em Decimal
unsigned int bin_to_dec (int bin, int POTENCIA, int TOTAL){

    if (bin == 0) return 0;
    if (bin == 1) return TOTAL + POTENCIA;
    TOTAL = TOTAL + bin%10 * POTENCIA;
    return bin_to_dec(bin/10, POTENCIA*2, TOTAL);

}
//Transforma um Decimal em Binário
unsigned int dec_to_bin (int dec, int POTENCIA, int TOTAL){

    if (dec == 0) return 0;
    if (dec == 1) return TOTAL+POTENCIA;
    TOTAL = TOTAL + ((dec%2) * POTENCIA);
    return dec_to_bin(dec/2, POTENCIA*10, TOTAL);


}
int main(){

    int OPCAO, NUMERO;

    scanf ("%i %i", &NUMERO, &OPCAO);


    if (OPCAO==1){

        printf("%i\n", dec_to_bin(NUMERO ,1, 0));
    }
    else if (OPCAO==2){
        printf ("%i\n", bin_to_dec(NUMERO, 1, 0));

    }
    else {printf("\nOpcao invalida...\n");
    }
    return 0;
}
