/**
 * reverse_array - reverses content of an array of integers
 * @a: an array
 * @n: number of element of array
 * Return: nothing
 */
#include "main.h"
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
