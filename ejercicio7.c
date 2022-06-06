//creador yo si usa un solo digito agrege cero al inicio ejemplo 2x09 3x07
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char cadena1[1000];
    char cadenas1[100][100];
    char cadenas2[100][100];
    int i, j, aux=0;
    printf("escriba los numeros para la primera cadena  ");
    fgets(cadena1, 1000, stdin);
  for(i=0;i<=(strlen(cadena1));i++)
    {
        
        if(cadena1[i]== ' ' || cadena1[i]== '\0' || cadena1[i] =='x' ){
        
            cadenas1[aux][j]='\0';
            aux++;  
            j=0;    
        }
        else
        {
            cadenas1[aux][j]=cadena1[i];
            j++;
        }
    }


    if(strcmp(cadenas1[1], cadenas1[3]) == 0){ //comando de string para comparar caracteres de una cadena 
        printf("son iguales \n");
    }
    if(strcmp(cadenas1[1], cadenas1[3]) > 0){
        printf("la menor es %s  \n", cadenas1[3]);
    }
     if(strcmp(cadenas1[1], cadenas1[3]) < 0){
        printf("la menor es %s \n", cadenas1[1]);
     }

return 0;
}    
