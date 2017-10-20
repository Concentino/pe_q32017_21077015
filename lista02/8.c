#include<stdio.h>
#include<math.h>
//Calcula o bonus do trabalhador
float acrescimos (float BONUS, float HORAS_EXTRAS){

    return HORAS_EXTRAS * BONUS;
}
//Calcula os descontos do trabalhador
float descontos (float TAXA, float FALTAS){

    return TAXA * FALTAS;
}
//Calcula o salário final do trabalhador
float final_mes (float Salario, float TAXA, float BONUS, float FALTAS, float HORAS_EXTRAS){
    float SALARIOFINAL;

    SALARIOFINAL = Salario + acrescimos(BONUS, HORAS_EXTRAS) - descontos(TAXA, FALTAS);
    return SALARIOFINAL;
}

int main(){
    int CARGO;
    float Salario, HORAS_EXTRAS, FALTAS, TAXA, BONUS;
    scanf ("%i %f %f", &CARGO, &FALTAS, &HORAS_EXTRAS);

    if (CARGO == 1){
        Salario = 10000;
        TAXA = 500;
        BONUS = 102.5;
    }

    else if (CARGO == 2){
        Salario = 8000;
        TAXA = 400;
        BONUS = 90;
    }

    else if (CARGO == 3){
        Salario = 5000;
        TAXA = 225;
        BONUS = 68.12;
    }

    else if (CARGO == 4){
        Salario = 3000;
        TAXA = 150;
        BONUS = 58.75;
    }

    else if (CARGO == 5){
        Salario = 2000;
        TAXA = 100;
        BONUS = 52.5;
    }

    else {printf("Opcao invalida...\n");}

    printf ("%.2f\n", final_mes (Salario, TAXA, BONUS, FALTAS, HORAS_EXTRAS));
}
