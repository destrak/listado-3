//creador yo
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char cadena[1000], cadena2[1000];
    printf("escriba los numeros para la primera cadena  2x");
    fgets(cadena, 1000, stdin);
    printf("escriba los numeros para la primera cadena 2  3x");
    fgets(cadena2, 1000, stdin);

    if(strcmp(cadena, cadena2) == 0){ //comando de string para comparar caracteres de una cadena
        printf("son iguales \n");
    }
    if(strcmp(cadena, cadena2) > 0){
        printf("3x%s  \n", cadena2);
    }
     if(strcmp(cadena, cadena2) < 0){
        printf("2x%s \n", cadena);
     }


return 0;
}    
