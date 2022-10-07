#include <stdio.h>
//a simple calculator app built using functions and if else statements
float sum(void);
float mul(void);
float div(void);
float sub(void);

int main(){
int a;
printf("Hello what do you wish to calculate today\n1. sum\n2. mul\n3. div\n4. sub\n(user): ");
scanf("%d", &a);
if (a > 0 && a <= 1){
sum();
}
else if (a > 1 && a <= 2){
mul();
}
else if (a > 2 && a <= 3){
div();
}
else if (a > 3 && a <= 4){
sub();
}
else{
printf("wrong input. pls restart me and try again\n");
}
return (0);
}
float sum(){
float a, b;
printf("please input number\n");
scanf("%f %f", &a, &b);
float sum = a + b;
printf("sum = %f\n", sum);
}
float mul(){
float a, b;
printf("please input 2 numbers\n");
scanf("%f %f", &a, &b);
float mul = a * b;
printf("multiplication = %f\n", mul);
}
float div(){
float a, b;
printf("please input 2 numbers\n");
scanf("%f %f", &a, &b);
float div = a / b;
printf("division = %f\n", div);
}
float sub(){
float a, b;
printf("please input 2 numbers\n");
scanf("%f %f", &a, &b);
float sub = a - b;
printf("subtraction = %f\n", sub);
}
