#include <stdio.h>

int main(){
	int a[100], i;
	for (i=0; i<10; i--){
printf("welcome to MTN ZIGI VA. what do you want me to do for you\n1. check balance\n2. Recharge line\n3. Caller tunez\n4. Play games\n5.Buy data\n6. MTN Xtra-value\n7. MTN Xtra-byte\n8. Exit\n");

scanf("%d", &a[1]);
if (a[1] == 8)
	break;
if (a[1] == 1){
printf("input mobile no.\n");
a[2] = 8051688361;
printf("(+234) ");
scanf("%d", &a[3]);
if (a[3] == a[2]){
printf("your account balance is #2.34. please recharge\n");
}
else{
	printf("number not allocated\n");
}
}
}
	
	return (0);
	
}
