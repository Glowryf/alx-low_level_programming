/**
 * main - Prints the aphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	char m;
	char v;

	m = 'a';
	v = 'A';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (v <= 'Z')
	{
		putchar(v);
		v++;
	}
	putchar('\n');
	return (0);
}
