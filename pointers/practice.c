#include <stdio.h>

void main(){

int a[5] = {1, 2, 10, 5, 3};
int *p = &a[0];
int * q = &a[0];
p = p + 3;

*p = 11;
printf("address of a in pointer q is %p\nvalue of a in pointer p is %d\n", q, *p);

}
