//creador yo
#include <stdio.h>
#include <stdlib.h>
int main(){
 unsigned int n;
unsigned char c, c1, c2, c3, n1, n2, n3, n4;
  printf("ingrese un numero entero\n");
  scanf("%d", &n);


   n1 = n >>8;
   n2 = n >> 16;
   n3 = n >> 24;
   n4 = n;
  
  c = n1;
  c1 = n2;
  c2 = n3;
  c3 = n4;
     printf("primer byte: %d \n", n4);
  printf("segundo byte: %d \n", n1);
  printf("tercer byte: %d \n", n2);
  printf("cuarto byte: %d \n", n3);
   printf("primer caracter: %c\n", c3);
    printf("segundo caracter: %c\n", c);
    printf("tercer caracter: %c\n", c1);
     printf("cuarto caracter: %c\n", c2);
    
return 0;
}
 
