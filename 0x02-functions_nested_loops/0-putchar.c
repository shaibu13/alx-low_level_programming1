#include <stdio.h>
#include "main.h"
#include <unistd.h>

int main(void)
{
	char A[] = "_putchar";
	int i;

	for (i = 0; A[i]; i++)
	_putchar(A[i]);

	_putchar('\n');

	return (0);
}
