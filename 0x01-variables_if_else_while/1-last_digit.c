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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of n and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of n and is 0\n");
	}

	else
		(n % 10 < 6 && n % 10 != 0);

	{
		printf("Last digit of n and is less than 6 and not 0\n");
	}
	return (0);
}
