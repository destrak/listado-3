//creador yo
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
char cadena[10000];
int suma=0;
scanf("%s", cadena);
printf("ingrese los numeros \n");
for(int i=0; i <=strlen(cadena); i++){
    if(cadena[i] != '\0' && cadena[i] !='.'){

        suma = suma+ cadena[i]- '0';
}
}
printf("la suma de los puntos flotantes sera %d\n", suma);
return 0;
}




 