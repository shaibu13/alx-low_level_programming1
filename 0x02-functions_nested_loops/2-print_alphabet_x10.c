#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10x
 *
 */

void print_alphabet_x10(void)
{
	char x[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; x[i]; i++)
		_putchar(x[i]);
	}
	_putchar('\n');
}
