#include<conio.h>
#include<stdio.h>

int main(){

    float num1 = 11;
    float num2 = 7;
    double a = num1 / num2;
    
    
    printf(" En variable double %f\n",a);
    printf(" Resultado división %f\n\n",num1 / num2);
    printf(" Casting de datos\n Flotante %f\n Entero %i\n Doble %f\n Caracter %c ",a,(float)a,(int)a,(double)a,(char)a);
    

//No se aprecia ninguna diferencia. 
//El resultado de la división y su mismo resultado en una variable "double" 
//son exactamente la misma cantidad en su parte entera y su parte decimal.
    
    
