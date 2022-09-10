/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
	{
		putchar(44);
		putchar(32);
		i++;
	}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
