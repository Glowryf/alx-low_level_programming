/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
int main(void)
{
	char m;

	m = 'z';
	while (m >= 'a')

	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
