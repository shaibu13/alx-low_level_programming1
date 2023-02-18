#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
*main - will print the last digit of the number stored in the value n
*
* Return: Always 0 (success)
*
*/
int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, b);
	}

	else

	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, b);
	}
	return (0);
}
