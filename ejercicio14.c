//creador yo
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{   int n;
        scanf("%d", &n);
    char v[100];
    int e=0 ,m=0, l=0, i;
    for( i = 0; i<n; i++){
        scanf("%s", v);
    if(v[0] == 'E'){
        e++;

    }
    else if(v[0] == 'M'){
        m++;
    }
    else if(v[0] == 'L'){
        l++;
    }
    scanf("%s", v);
}

if(e<m && l<m){
printf("Macaroni Penguin");
}
if(e<l && m<l){
printf("Little Penguin");
}
if(m<e && l<e){
printf("Emperor Penguin");
}
    return 0;
}
    