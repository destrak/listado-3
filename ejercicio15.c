#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
	char cadena[24];
	int a=2, n, j, i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", cadena);
		a++;
		for(j=0; j<strlen(cadena); j++){
			if(cadena[j] == '+'){
				a++;
			}
		}
	}
if(a==13){
	a++;
}
printf("%d", a*100);
return 0;
}