/**
 * print_last_digit - prints last digit
 * of a number
 *
 * @n: input number as an integer
 *
 * Return: last digit
 *
 */
#include "main.h"
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 10)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
