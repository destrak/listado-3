//creador yo con ayuda de Pedro Paris que me ayuda a darme cuenta que me faltaba un parentisis y me explico la funcion del getchar 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char cadena[1000];
	int  cad;
	printf("escriba una palabra o frase : \n");
	
	
while((cad = getchar())  != '\n' ){
	if(cad >= 65 && cad <= 90 ){
		cad = cad + 32;}
		else if(cad >= 97 && cad <= 122){

		cad = cad - 32;}
	
	printf("%c", cad);
}
	return 0;
}
    