/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: no return
 */
#include "main.h"
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
