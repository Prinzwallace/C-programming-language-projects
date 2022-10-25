#include <stdio.h>
#include <string.h>
//program using the gets and puts functions
int main(){
	char name[50];
	int x;
	printf("enter name\n");
	gets(name);
	printf("welcome back %s\n", name);

	x = strlen(name);

	printf("length of string is %d\n", x);

	return (0);
}
