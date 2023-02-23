#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - Print putchar
 * Return: 0
 */

int main(void)
{
	char A[] = "_putchar";
	int i;

	for (i = 0; A[i]; i++)
	_putchar(A[i]);

	_putchar('\n');

	return (0);
}
