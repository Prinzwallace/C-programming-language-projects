#include <stdio.h>
//a simple ASCII calculator that gives ASCII value of numbers
int main()
{
	char c;

	printf("Hello wallace type in character and i will tell you its ASCII value: ");
	
	scanf("%c", &c);

	printf("The ASCII value of %c is %d\n", c, c);

	return (0);
}
