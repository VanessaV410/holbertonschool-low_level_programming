#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: The character to print
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = _abs(0);
	}
	else if (n == -1)
	{
		n = _abs(-1);
	}
	return (0);
}
