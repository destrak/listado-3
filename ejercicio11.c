//creador yo 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char cadena[1000];
	int  cad,count=0, aux= 0, aux1=0, aux2=0;
	printf("escriba una palabra o frase : \n");
	
	
while((cad = getchar())  != '\n' ){
	if(cad == 32){
		aux++;}
		else if(cad >= 65 && cad <= 90 ){
			aux1++;}
			else if(cad >= 97 && cad <= 122){
				aux2++;}
		else{
count++;} 
}
printf("la cantidad de caracteres son %d\n", count + aux1 + aux2 +aux);
printf("las palabras seran %d\n", aux+1);
printf("las mayusculas  seran %d\n", aux1);
printf("las minusculas  seran %d\n", aux2);
}