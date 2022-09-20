/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
