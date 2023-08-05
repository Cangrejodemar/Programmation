
#include <stdio.h>

int main(){

    int suma= 5+5;
    float pescado = 5.5;
    char letra = 'd';
    double pi = 3.1415926535;


    printf(" Cinco mas cinco es %i ", suma);
    printf("\n El pescado cuesta %.8f euros. ", pescado);// Permite almacenar 4 bytes, un decimal con una precisión de 7 dígitos.
    printf("\n Mi letra preferida es la %c de dedo. ", letra); 
    printf("\n El número pi es %.16f ", pi);// Permite almacenar 8 bytes, un decimal con una precisión de 15 dígitos.
    
    printf("\n\n Valor en bytes char: %u\n",sizeof(char)); 
    printf(" Valor en bytes int: %u\n",sizeof(int)); 
    printf(" Valor en bytes float: %u\n",sizeof(float)); 
    printf(" Valor en bytes double: %u\n",sizeof(double)); 
}
