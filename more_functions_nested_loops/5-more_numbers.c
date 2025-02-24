#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int c, numbers;

	for (c = 0 ; c < 10 ; c++)
	{
		for (numbers = 0 ; numbers <= 14 ; numbers++)
		{
			if (numbers > 9)

			_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
		_putchar ('\n');
	}
}
