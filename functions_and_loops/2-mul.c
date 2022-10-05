#include <stdio.h>

int mul(void);

int main(){
int x, y;

mul();
printf("Do you wish to continue program?\n1. yes\n2. No\n(user): ");
scanf("%d", &x);
while (x > 0 && x <= 1){
mul();
if (x > 1){
break;
}
printf("Do you wish to continue program?\n1. Yes\n2. No\n(user); ");

scanf("%d", &y);
if (y > 0 && y <= 1){
printf("Alright then!\n");
}
else{
break;
}
}
return (0);
}

int mul(void){
int a, z;
int b = 1;
printf("Hi there! pls input number and i will give you its multiplication table\n(user): ");
scanf("%d", &a);

while (b <= 12){

z = a * b;
printf("%d * %d = %d\n", a, b, z);
b++;
}
}
