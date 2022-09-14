/**
 * _abs - computes the absolute value
 * of an integer.
 *
 * @n: input number as an integer
 *
 * Return: absolute value
 */
#include "main.h"
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
