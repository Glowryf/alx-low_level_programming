/**
 * print_most_numbers - checks numbers 0-9
 *
 * Return: Always 0
 */
#include "main.h"
void print_most_numbers(void)
{
	int g;

	for (g = 0; g < 9; g++)
	{
		if (g != 2)
		{
			if (g != 4)
			{
				_putchar(g);
			}
		}
	}
	_putchar('\n');
}
