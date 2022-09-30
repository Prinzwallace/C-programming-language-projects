#include <stdio.h>

int main()
{
int age;

printf("Hello there!, pls input your age\n(user): ");
scanf("%d", &age);
if (age <= 20 && age >= 0){
printf("Wow you are really young\n");
}
else if (age > 20 && age < 50){
printf("wow you are matured\n");
}
else{
printf("you are old\n");
}

return (0);
}
