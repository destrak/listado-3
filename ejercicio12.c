//creador yo 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
char cadena1[100];
printf("ingrese la cadena 1\n");
fgets(cadena1, 100, stdin);
char cadena2[100];
printf("ingrese la cadena 2\n");
fgets(cadena2, 100, stdin);
int i, j, aux;
char cadenas1[100][100];
char cadenas2[100][100];
for(i=0;i<=(strlen(cadena1));i++)
    {
        
        if(cadena1[i]== ' ' || cadena1[i]== '\0'){
        
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

    for(i=0;i < aux;i++){
        printf(" %s %s \n",cadenas1[i], cadenas2[i]);    }

for(i=0;i<=(strlen(cadena2));i++)
    {
        
        if(cadena2[i]== ' ' || cadena2[i]== '\0'){
        
            cadenas2[aux][j]='\0';
            aux++;  
            j=0;    
        }
        else
        {
            cadenas2[aux][j]=cadena2[i];
            j++;
        }
    }

    for(i=0;i < aux;i++){
        printf(" %s\n",cadenas2[i]);    }
for(i=0; i<aux; i++){
	if(cadenas1[i] == cadenas2[i] && cadenas1 !='\0'){

	}printf("%s %s ", cadenas1[i], cadenas2[i]);
}



return 0;
}