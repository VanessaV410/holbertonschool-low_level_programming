#include "main.h"
/**
 * print_sign - check the code.
 * @n: The character to print
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if ((n) == 48)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
