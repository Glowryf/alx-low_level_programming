/**
 * _isupper - function to check if
 * character is uppercase
 *
 * @c: checks input of function
 *
 * Return: 0 or 1
 */
#include "main.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
