#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: interger variable
 * Return: 1 when ther is a digit other
 */
int _isdigit(int c)
{
	if (c <= 0 && c >= 9)
	{
		return (1);
	}
	return (0);
}
