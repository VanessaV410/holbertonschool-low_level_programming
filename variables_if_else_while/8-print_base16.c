#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	for (char number = '0' ; number <= '9' ; number++)
	{
		putchar(number);
	}
	for (char number = '0' ; number <= 'f' ; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
