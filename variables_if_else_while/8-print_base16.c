#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	for (number = 48 ; number <= 57 ; number++)
	{
		putchar(number);
	}
	for (number = 97 ; number <= 102 ; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
