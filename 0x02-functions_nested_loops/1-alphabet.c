#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints alphabets in lowercase.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char d[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; d[i]; i++)
	_putchar(d[i]);

	_putchar('\n');
}
