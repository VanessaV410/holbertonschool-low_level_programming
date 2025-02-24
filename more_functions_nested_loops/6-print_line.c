#include "main.h"
/**
 * print_line - Entry point
 *@n : the character to print
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (u = 1 ; u <= n ; u++)
		{
		_putchar('_');
		}
	_putchar('\n');
	}
}
