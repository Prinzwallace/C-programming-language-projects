#include <stdio.h>

int main()
{
char name[30];
int age;
int x = 1;
int op, a, y;
int z;

printf("Hello there I'm Gideon. your android assistant\n");
printf("Please what's your name? ");

scanf("%s", name);
printf("(Gideon): Hello %s!, it's nice to meet you\n", name);
printf("(Gidoen): I was told the humansare friendly\nI would really love to know you more\n");

printf("(Gideon): How old are you?\n");
printf("(%s): ", name);
scanf("%d", &age);

if(age < 30){
printf("(Gideon): Wow %s! you really young\n", name);
printf("(Gideon): I hope you do exercise?\n");
printf("1 yes \n2 no\n");
scanf("%d", &op);

switch (op){

case 1:
printf("(Gideon): Perfect! That's a very good way to keep fit %s\n", name);

break;

case 2:
printf("(Gideon): Aww! You should try exercising %s. This will keep you in shape\n", name);

break;

default:
printf("(Gideon): Something is wrong! please restart me\n");

break;
}
}
else if(age >= 30 && age < 60){
printf("(Gideon): wow %s! you really a man\n", name);
printf("(Gideon): Are you\n1 Married\n2 Divorced\n3 single\n(%s): ", name);
scanf("%d", &y);
if (y > 0 && y <= 1){
printf("(Gideon): Awwwwn! That's so lovely\n(Gideon): Do you have kids?\n1 yes\n2 no\n(%s): ", name);
scanf("%d", &z);
if (z > 0 && z <= 1){
printf("(Gideon): Wow! how many children do you have?\n(%s): ", name);
scanf("%d", &a);
if (a > 0 && a <= 1){
printf("(Gideon): Wow you have a child\n(Gideon): That's beautiful %s\n", name);
}
else{
printf("(Gideon): wow you have %d children! That's awesome!\n", a);
}
}
else{
printf("(Gideon): Don't worry you will get yours soon\n");
}
}
else if(y == 2 && y < 3){
printf("(Gideon): That's so sad. Anyways things happens. you will find someone better\n");
}
else{
printf("(Gideon): Don't worry %s. soon i'll help you find love\n", name);
}
}

else{
printf("(Gideon): you really old %s\n", name);
}
printf("(Gideon): Do you wish to program me more?\n");
printf("1. yes\n");
printf("2. No\n");

scanf("%d", &x);
if(x < 2){
printf("Okay %s, see you next time\n", name);
}
else if(x > 1){
printf("Awww! I'm sorry %s I'm tired. maybe next time. Bye!!\n", name);
}
return (0);
} 
