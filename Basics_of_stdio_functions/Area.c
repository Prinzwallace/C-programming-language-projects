#include <stdio.h>
//A simple area calculator app

int main()
{
	int radius;
	printf("Hello Scarlet input radius: ");

	scanf("%i", &radius);

	double area = 3.142 * (radius * radius);
	printf("The area of a circle of radius %i is: %f", radius, area);

	return (0);
}
