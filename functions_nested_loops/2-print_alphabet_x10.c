#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	char alphabet;

	for (x = 0 ; x < 10; x++)
	{
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)

	{
		_putchar(alphabet);
	}
		_putchar('\n');
	}
}
