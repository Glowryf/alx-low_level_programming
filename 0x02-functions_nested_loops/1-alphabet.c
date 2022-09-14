/**
 * print_alphabet - prints alphabets in lowercase.
 *
 * Return: 0 Always (Success)
 *
 */
#include "main.h"
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
