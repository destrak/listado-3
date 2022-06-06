//creador yo
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	printf("ingrese un valor del 0 al 255\n");
	scanf("%d", &num);
	printf("el numero octogonal sera %o\n", num);
	printf("el numero hexadecimal sera %x\n", num);
	printf("el caracter sera %c\n", num);
	printf("el numero entero sin signo  sera %d\n", num);
	
	return 0;
}