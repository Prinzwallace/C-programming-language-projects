#include <stdio.h>

int average(int i, int[i]);

int main()
{
int i, z, s;
printf("Input how many values\n");
scanf("%d", &i);

int a[i];
printf("Enter values\n");
for (z = 0; z <= i; z++)
{
scanf("%d", &a[z]);
}
int *p = &a;
s = average(i, p[i]);
printf("average = %d\n", s);

return (0);
}

int average(int i, int *p){
int b, sum = 0, c;

for (b = 0; b <= i; b++)
{
sum = sum + p[b];
}
c = sum / i;

return (c);
}
