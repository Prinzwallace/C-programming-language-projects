#include <stdio.h>
#include <string.h>

int main(){
	char name[30], fname[30];

	printf("________HELLO THERE________\n");
	printf("please input your name\n");
	scanf("%s %s", name, fname);
	int i=5;
	while (i!=0){
		i--;
	printf("________________________\n");
	printf("please input password\n(password): ");
	char password[12] = "wallace1234";
	char user[12];
	scanf("%s", user);
	int b, j=0;
	for (b=0; b<11; b++){

	if(password[b] == user[b]){
		j=j+1;
	}
	else{
		break;
	}
	}
	if (j == 11){
		printf("welcome back %s %s\n", name, fname);
		break;
	}
	if(i != 0){
		printf("incorrect password. you have (%d) attempts left", i);
	}
	else{
		printf("Too many attempts. Try again later\n");
	}
	}

	return (0);
}
