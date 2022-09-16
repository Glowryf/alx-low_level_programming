/**
 * _isdigit - function that checks for a digit
 * @c: character
 *
 * Return: 0 or 1
 */
#include "main.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
