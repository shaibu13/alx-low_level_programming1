#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - prints alphabets in lowercase.
 *
 */

void print_alphabet(void)
{
	char d[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; d[i]; i++)
	_putchar(d[i]);

	_putchar('\n');
}
