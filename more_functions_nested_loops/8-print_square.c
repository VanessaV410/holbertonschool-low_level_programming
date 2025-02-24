#include "main.h"
/**
 * print_square -  prints a square.
 *@size:  the character to print
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0 ; h < size ; size++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
