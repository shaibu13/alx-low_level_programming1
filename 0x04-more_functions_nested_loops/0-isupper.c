#include "main.h"
/**
 *_isupper - checks for uppercase letters
 *@c: integer variable
 *Return: 1 if c is uppercase otherwise return 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

