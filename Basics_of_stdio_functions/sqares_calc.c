#include <stdio.h>
//a simple square calculator
int main ()
{
	int eggs;
	printf("Hello I'm squares your square calculator robot. please type in any number and i will calculate its squares: ");

	scanf("%i", &eggs);

	double squares = (double) (eggs * eggs);

	printf("The square of the number %i is %f\n", eggs, squares);

	return (0);

}
