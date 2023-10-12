//Escribir un programa en C que, dado el número del mes y la información de si el año es bisiesto, muestre por pantalla el número de días del mes.
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int tipo;
    int mes;

    printf("indique el mes: ");
        scanf("%d",  &mes);

    switch(mes)

    {

    case 1:
    printf("Enero tiene 31 dias");
    break;

    case 2:
    printf("indique si el año es bisiesto 1- si, 2- no: ");
    scanf("%d",  &tipo);
    if (tipo == 2)
    printf("Febrero tiene 29 dias");
    else
    printf ("Febrero tiene 28 dias");
    break;

    case 3:
    printf("Marzo tiene 31 dias");
    break;

    case 4:
    printf("Abril tiene 30 dias");
    break;

    case 5:
    printf("Mayo tiene 31 dias");
    break;


    case 6:
    printf("Junio tiene 30 dias");
    break;


    case 7:
    printf("Julio tiene 31 dias");
    break;


    case 8:
    printf("Agosto tiene 31 dias");
    break;


    case 9:
    printf("Septimebre tiene 30 dias");
    break;

    case 10:
    printf("Octubre tiene 31 dias");
    break;

    case 11:
    printf("Noviembre tiene 30 dias");
    break;

    case 12:
    printf("Diciembre tiene 31 dias");
    break;

    }

return 0;

}
