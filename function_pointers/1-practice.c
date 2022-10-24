#include <stdio.h>

int love(int, int);

int main(){
int (*ptr)(int, int) = &love;
int s;

s = (*ptr)(5, 3);
printf("amswer is = %d\n", s);

return (0);
}

int love(int x, int y){

return (x + y);
}
