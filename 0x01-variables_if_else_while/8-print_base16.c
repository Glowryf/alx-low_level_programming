/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
int main(void)
{
	int i;
	char l;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	l = 'a';
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
