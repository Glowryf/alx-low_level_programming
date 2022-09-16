/**
 * print_most_numbers - checks numbers for a digit
 *
 * Return: Always 0
 */
#include "main.h"
void print_most_numbers(void)
{
	int g;

	for (g = 48; g < 58; g++)
	{
		if (g != 50)
		{
			if (g != 52)
			{
				_putchar(g);
			}
		}
	}
	_putchar('\n');
}
