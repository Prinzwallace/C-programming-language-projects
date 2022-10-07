#include <stdio.h>

float sum(void);
float mul(void);
float div(void);
float sub(void);

int main(){
int a, i = 0;
while (i < 6){
printf("Hello what do you wish to calculate today\n1. sum\n2. mul\n3. div\n4. sub\n0. exit\n(user): ");
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
break;
}
}
return (0);
}
float sum(){
float a;
int i = 0, b;
while (i < 5){
float sum = 0;
printf("You've selected sum. please input number. press 0 to exit program\n");
while (i < 5){
printf("(user): ");
scanf("%f", &a);
if (a < 0 || a > 0){
sum = a + sum;
printf("sum = %f\n", sum);
}
else{
break;
}
}
printf("do you wish to rum sum again?\n1. yes\n2. no\n(user): ");
scanf("%d", &b);
if (b > 0 && b <= 1){
printf(" ");
}
else{
break;
}
}
}
float mul(){
float a;
int i = 0, b;
while (i < 5){
float mul = 1;
printf("You have selected mul. please input a number. Enter 0 to exit\n");
while (i < 6){
printf("(user): ");
scanf("%f", &a);
if (a < 0 || a > 0){
mul = a * mul;
printf("mul = %f\n", mul);
}
else{
break;
}
}
printf("do you wish to run mul again\n1. yes\n2. no\n(user): ");
scanf("%d", &b);
if (b > 0 && b <= 1){
printf(" ");
}
else{
break;
}
}
}
float div(){
float a;
int i = 0, b;
while (i < 6){
float div = 1;
printf("You have selected div. please input a number. press 0 to exit\n");
while (i < 6){
printf("(user): ");
scanf("%f", &a);
if (a < 0 || a > 0){
div = a / div;
printf("div = %f\n", div);
}
else{
break;
}
}
printf("do you wish to run div again?\n1. yes\n2. no\n(user): ");
scanf("%d", &b);
if (b > 0 && b <= 1){
printf(" ");
}
else{
break;
}
}
}
float sub(){
float a;
int i = 0, b;
while (i < 5){
float sub = 0;
printf("You've selected sub. please input a number\n");
while (i < 5){
printf("(user): ");
scanf("%f", &a);
if (a < 0 || a > 0){
sub = a - sub;
printf("sub = %f\n", sub);
while (i < 5){
printf("(user): ");
scanf("%f", &a);
if (a < 0 || a > 0){
sub = sub - a;
printf("sub = %f\n", sub);
}
else{
break;
}
}
}
else{
break;
}
}
printf("do you wish to run sub again?\n1. yes\n2. no\n(sum): ");
scanf("%d", &b);
if (b > 0 && b <= 1){
printf(" ");
}
else{
break;
}
}
}
