//1. Crear un vector de tipo int que contenga los valores: 1,2,3,5 y 9. Imprimir el vector.
#include <stdio.h>
#include <stdlib.h>

int main(){

int v[] = {1,2,3,5,9};
int i;

    printf("Los componentes del vector son:");
    printf("( ");
    for (i = 0; i < 5; i++){

    printf("%d, ", v[i]);

    }

    printf(")");

return 0;

}
