#include <stdio.h>
#include <stdlib.h>

int main()
{

    float V;
    float R1;
    float R2;
    float R3;

    float I1;
    float I2;
    float I3;

    float V1;
    float V2;
    float V3;

    printf("PROGRAMA PARA CUALCULAR LA CORRIENTE Y VOLTAJE DE TRES RESISTENCIAS PARARALES EN UN CIRCUITO\n");
    printf("Dame el valor del voltaje \n");
    scanf("%f", &V);

    printf("Dame el valor de la resistencia 1 en Ohms \n");
    scanf("%f", &R1);

    printf("Dame el valor de la resistencia 2 en Ohms\n");
    scanf("%f", &R2);

    printf("Dame el valor de la resistencia 3 en Ohms\n");
    scanf("%f", &R3);

    I1=V/R1;
    I2=V/R2;
    I3=V/R3;

    printf("Las corrientes son:\n Corriente en la resistencia 1: %f A\n Corriente en la resistencia 2: %f A\n Corriente en la resistencia 3: %f A\n", I1,I2,I3);
    printf("Como sabemos en un circuito en parelo el valor del voltaje en cada resitencia es igual al voltaje de entrada \npor lo tanto en cada resietncia tendriamos un valor de: %f V\n",V);
    return 0;
}
