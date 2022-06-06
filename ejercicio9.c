//creador yo
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    
 double n, entera, decimal;
 int aux = 0;
 printf("ingrese un numero\n");
 scanf("%lf", &n);
 decimal = modf(n, &entera); // separa la parte entera y decimal
 aux = decimal * 1000000;
  if(aux < 500000){

    printf("el numero sera %f\n", entera);
  }
  if(aux >= 500000){

    printf("el numero sera %f\n", entera+1);
  }

return 0;


}
