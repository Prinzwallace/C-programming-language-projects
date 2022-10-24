#include <stdio.h>

int love(void);

int main(){
int (*ptr)(void) = &love;
int s;

s = (*ptr)();
printf("amswer is = %d\n", s);

return (0);
}

int love(){
int x, y;
printf("enter twon numbers\n");
scanf("%d %d", x, y);
return (x + y);
}
