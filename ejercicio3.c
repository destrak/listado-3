//creador yo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n;
		printf("elija la cantidad de elementos\n");
		scanf("%d", &n);
	int i, j;
	double arreglo[n], dm;
	float menor, mayor, mediana, promedio, de, acumulado = 0, acumulado2 = 0;
	short varianza;

	for( i = 0; i< n; i++){
		printf("ingrese los numeros de la cantidad seleccionada %d\n", i +1);
		scanf("%lf", &arreglo[i]);
	}
	for( i = 0; i < n; i++){
		for(j = 0; j < n; j++ ){
		if( arreglo[i] < arreglo[j]){
		
   		
 	int aux = arreglo[i];
	arreglo[i] = arreglo[j];
	arreglo[j] = aux;
}
}
}


	for(i = 0; i < n; i++){
		menor = arreglo[0];
		if (mayor < arreglo[i]){
		mayor = arreglo[i];
		acumulado += arreglo[i];
		printf("\n");	
		}

	}
	promedio = acumulado / n;
	printf(" el menor es %E\n", menor);
	printf(" el mayor es %.10lf\n", mayor);
	printf("el promedio es %011.2f\n", promedio);
		for(i = 0; i < n; i++){
			dm += fabs(arreglo[i] - promedio);
		
	}

	printf(" la desviacion media es %.2lf\n", dm /n);
	for(i = 0; i < n; i++){
		acumulado2 += fabs((arreglo[i] - promedio) * (arreglo[i] - promedio));
	}
	de = sqrt(acumulado2/n);
	printf(" la desviacion estandar es %.4g\n", de);
	for(i = 0; i < n; i++){
		varianza += fabs((arreglo[i] - promedio) * (arreglo[i] - promedio));
	}
	printf(" la varianza es %hd\n", varianza /n);

		if(n % 2 == 0 ){
			mediana = (arreglo[(n/2)-1] + arreglo[(n/2)])/2;
			printf("la mediana sera %.4f \n", mediana);
		}
		else if(n % 2 != 0){
			printf("la mediana sera %.4f", arreglo[n/2]);
		}

	return 0;
}

