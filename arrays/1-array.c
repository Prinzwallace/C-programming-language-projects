#include <stdio.h>

int main(){

int a[5], b[5], c[5], i;

for(i = 0; i < 5; i++){
scanf("%d %d", &a[i], &b[i]);
printf("input next set\n");
}
for(i = 0; i < 5; i++){

c[i]=a[i]+b[i];
printf("sum of arrays = %d\n", c[i]);
}
return (0);
}
