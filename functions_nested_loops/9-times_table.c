#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n, x, mul;


		for (n = 0 ; n <= 9 ; n++)
		{
			_putchar ('0');

			for (x = 0; x <= 9 ; x++)
			{
			_putchar(' ');
			_putchar(',');

			mul = n * x;

			if (mul <= 9)
				_putchar(' ');

			else
				_putchar((mul / 10) + '0');

			_putchar((mul % 10) + '0');
			}

			_putchar('\n');
		}
}
