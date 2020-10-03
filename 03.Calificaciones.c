#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char c1,c2,c3;
    float s,p;
    printf("PROGRAMA PARA OBTENER TU PROMEDIO APARTIR DE TRES CALIFICAIONES DADAS EN LETRAS YA SEAN MAYUSCULAS O MINUSCULAS\n");
    printf("Dame la calificacion 1: \n");
    scanf("%s",&c1);
    if(c1=='A'|| c1=='a')
    {
         s=10;
    }
    else if (c1=='B'|| c1=='b')
    {
        s=9;
    }
    else if (c1=='C'|| c1=='c')
    {
        s=8;
    }
    else if (c1=='D'|| c1=='d')
    {
        s=7;
    }
    else if (c1=='E'|| c1=='e')
    {
         s=6;
    }
    else if (c1=='F'|| c1=='f')
    {
        s=5;
    }
    printf("Dame la calificacion 2: \n");
    scanf("%s",&c2);
    if(c2=='A'|| c2=='a')
    {
         s=s+10;
    }
    else if (c2=='B'|| c2=='b')
    {
        s=s+9;
    }
    else if (c2=='C'|| c2=='c')
    {
        s=s+8;
    }
    else if (c2=='D'|| c2=='d')
    {
        s=s+7;
    }
    else if (c2=='E'|| c2=='e')
    {
         s=s+6;
    }
    else if (c2=='F'|| c2=='f')
    {
        s=s+5;
    }
    printf("Dame la calificacion 3: \n");
    scanf("%s",&c3);
    if(c3=='A'|| c3=='a')
    {
         s=s+10;
    }
    else if (c3=='B'|| c3=='b')
    {
        s=s+9;
    }
    else if (c3=='C'|| c3=='c')
    {
        s=s+8;
    }
    else if (c3=='D'|| c3=='d')
    {
        s=s+7;
    }
    else if (c3=='E'|| c3=='e')
    {
         s=s+6;
    }
    else if (c3=='F'|| c3=='f')
    {
        s=s+5;
    }

    p=s/3;

    printf("Tu promedio es de: %f",p);
return 0;

}
