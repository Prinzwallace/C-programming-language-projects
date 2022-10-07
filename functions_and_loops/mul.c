#include <stdio.h>
//A program that prints multiplication table based on user's input.this built using if else statements, loops and functions.
int mul(void);
int rep(void);

int main(){
mul();
rep();

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

int rep(void){

int b;
printf("Do you wish to input a new number?\n1. yes\n2. No\n(user): ");

scanf("%d", &b);

if (b > 0 && b <= 1){

mul();

}
else if (b > 1 && b <= 2){

printf("Thank you. see you next time.\n");
}
else{
printf("wrong input. Try again later\n");
}
}
