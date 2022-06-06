//creador yo 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
	int i, j= 0, k=0;
char cadena[1000];
printf("ingrese la cadena 1 ");
fgets(cadena, 1000, stdin);
char cadena2[1000];
printf("ingrese la cadena 2 ");
fgets(cadena2, 1000, stdin);
char aux[1000], aux2[1000];
for(i= 0;  i<strlen(cadena); i++){
	if(cadena[i] != ' '){
	j++;
	aux[j] =cadena[i];}
}

	for(i= 0; i<strlen(cadena2); i++){
		if(cadena2[i] != ' '){
		j++;
		aux[j] =cadena2[i];
	

}
}

printf("la cadena normal es %s", aux);
printf("la cadena concatenada sera: ");
for(i=j-1; i>=0; i--){
	k++;
	aux2[k] =aux[i];


printf("%c", aux2[k]);
}
printf("\n");
printf("vocales: ");
printf("\n");
for( i=0; i<k; i++){

if(aux2[i] =='a'|| aux2[i] =='e'|| aux2[i] == 'i' || aux2[i] == 'o' || aux2[i] == 'u' || aux2[i] =='A'|| aux2[i] == 'E' || aux2[i] == 'I' || aux2[i] == 'O' || aux2[i] == 'U'){
	printf("%c", aux2[i]);
}
}
printf("\n");
return 0;
}