#include "main.h"
/**
 * times_table - prints every minute of the day.
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int n, x;
	int mul;

		for (n = 0 ; n <= 9 ; n++)
		{
			x = 9;
			mul = x * n;
		}
			_putchar(mul + '0');
			_putchar('\n');
}
