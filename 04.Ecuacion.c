#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,r,x1,x2;
    printf("PROGRAMA PARA CALCULAR EL VALO DE X PARA ECUACIONES DE SEGUNDO GRADO: ax^2+bx+c\n");
    printf("Dame el valor de a: \n");
    scanf("%f",&a);
    printf("Dame el valor de b: \n");
    scanf("%f",&b);
    printf("Dame el valor de c: \n");
    scanf("%f",&c);

    r=sqrt((b*b)-(4*a*c));
    x1=(-b+r)/(2*a);
    x2=(-b-r)/(2*a);

    printf("El valor para x1 es :%f\n",x1);
    printf("El valor para x2 es :%f\n",x2);

    return 0;
}
