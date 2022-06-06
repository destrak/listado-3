//creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
	char c;
		printf("ingrese un caracter del rango 0 al 255 del codigo ASICC\n");
	scanf("%c", &c );
	if(  c >= 48 &&  c <= 57){
		printf("Numero\n");
	}
	else if(  c <= 90 && c >= 65){
		printf("Mayuscula\n");
	}
		else if( c <= 122 &&  c >= 97){
			printf(" Minusculas\n");
			}
			else{
				printf("otro\n");
			}
		return 0;
		}


