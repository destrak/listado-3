//creador yo
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
  char cadena1[1000];
    char cadenas1[100][100];
    int i, j, aux=0, aux2=0;
    printf("escriba la cadena 2xN1 3xN2  ");
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
    aux= atoi(cadenas1[3]);
    aux2= atoi(cadenas1[1]);

    printf("%d\n", aux);
       printf("%d\n", aux2);
if(aux > aux2 )
{printf("el menor es %s  \n", cadenas1[1]);

}
else{
       printf("el menor es %s \n", cadenas1[3]);

}
return 0;
}
