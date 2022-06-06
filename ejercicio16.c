#include <stdlib.h> //creador yo
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	 unsigned int n, i;
unsigned long long int m=0;
	scanf("%d", &n);
	unsigned int v[n];
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);}

for(i=0; i<n; i++){
m=(long long )sqrt((v[i]-1)*2);
if(((m*(m+1))/2)+1 ==v[i]){
	printf("1 ");
}
else{
	printf("0 ");
}
}
return 0;
}

