//creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	long int n, n1 , n2, n3;
	 char c;

		printf("ingrese un caracter del rango 0 al 255 del codigo ASICC\n");
	scanf("%c", &c );
	printf("ingrese un numero entero\n");
	scanf("%ld", &n);


	 n1 = n >>8 ;
	 n2 =n >> 16 ;
	 n3 = n >> 24;
	char resultado = c & n;  
	char resultad = c & n1; 
	char resulta = c  & n2; 
	char result = c & n3; 
	printf("%i \n", resultado);
	printf("%i \n", resultad);
	printf("%i \n", resulta);
	printf("%i \n", result);
	printf("%ld \n", n);
	printf("%ld \n", n1);
	printf("%ld \n", n2);
	printf("%ld \n", n3);
		if (result == c ){
		printf("esta contenido en algun byte\n");
			}
	else if( resulta == c){
			printf("esta contenido en algun byte\n");}
	else if( resultad == c ){
			printf("esta contenido en algun byte\n");}
	else if(resultado == c){
			printf("esta contenido en algun byte\n");}
	else if(resultado != c || resultad != c || resulta != c || result != c){
		printf("no esta contenido en ningun byte entonces se concatenan 4 veces siendo el numero %d \n ", c * 16777216 + c  * 65536 + c * 256+ c);
	} 
	return 0;
}